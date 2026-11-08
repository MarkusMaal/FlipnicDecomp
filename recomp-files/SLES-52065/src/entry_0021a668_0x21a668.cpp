#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0021a668
// Address: 0x21a668 - 0x21a6a8
void entry_0021a668_0x21a668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a668_0x21a668");
#endif

    switch (ctx->pc) {
        case 0x21a67cu: goto label_21a67c;
        default: break;
    }

    ctx->pc = 0x21a668u;

    // 0x21a668: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21a668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a66c: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x21a66cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x21a670: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x21a670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x21a674: 0xc01d456  jal         func_075158
    ctx->pc = 0x21A674u;
    SET_GPR_U32(ctx, 31, 0x21A67Cu);
    ctx->pc = 0x21A678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A674u;
    // 0x21a678: 0x37a70008  ori         $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x75158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x75158u, 0x21A674u, 0x21A67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A67Cu;
label_21a67c:
    // 0x21a67c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21a67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a680: 0x4a10009  bgez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21A680u;
    {
        const bool branch_taken_0x21a680 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x21a680) {
            ctx->pc = 0x21A6A8u;
            return;
        }
    }
    ctx->pc = 0x21A688u;
    // 0x21a688: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x21A688u;
    {
        const bool branch_taken_0x21a688 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A688u;
        // 0x21a68c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a688) {
            ctx->pc = 0x21A750u;
            return;
        }
    }
    ctx->pc = 0x21A690u;
    // 0x21a690: 0x40053000  mfc0        $a1, Wired
    ctx->pc = 0x21a690u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_wired);
    // 0x21a694: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x21a694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21a698: 0x40823000  mtc0        $v0, Wired
    ctx->pc = 0x21a698u;
    ctx->cop0_wired = GPR_U32(ctx, 2) & 0x3F; ctx->cop0_random = 47;
    // 0x21a69c: 0x40f  sync.p
    ctx->pc = 0x21a69cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21a6a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x21A6A0u;
    {
        const bool branch_taken_0x21a6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a6a0) {
            ctx->pc = 0x21A6F0u;
            return;
        }
    }
    ctx->pc = 0x21A6A8u;
}
