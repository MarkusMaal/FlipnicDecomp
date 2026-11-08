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

// Function: entry_0019f66c
// Address: 0x19f66c - 0x19f6bc
void entry_0019f66c_0x19f66c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f66c_0x19f66c");
#endif

    switch (ctx->pc) {
        case 0x19f6b0u: goto label_19f6b0;
        default: break;
    }

    ctx->pc = 0x19f66cu;

    // 0x19f66c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x19f66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x19f670: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19f670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19f674: 0xac20dbd0  sw          $zero, -0x2430($at)
    ctx->pc = 0x19f674u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36DBD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36DBD0u, _value); } while (0);
    // 0x19f678: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x19f678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x19f67c: 0xaf808708  sw          $zero, -0x78F8($gp)
    ctx->pc = 0x19f67cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936328), GPR_U32(ctx, 0));
    // 0x19f680: 0xac20dbd4  sw          $zero, -0x242C($at)
    ctx->pc = 0x19f680u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36DBD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36DBD4u, _value); } while (0);
    // 0x19f684: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x19f684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x19f688: 0xac20dbd8  sw          $zero, -0x2428($at)
    ctx->pc = 0x19f688u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36DBD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36DBD8u, _value); } while (0);
    // 0x19f68c: 0x8c4228f0  lw          $v0, 0x28F0($v0)
    ctx->pc = 0x19f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10480)));
    // 0x19f690: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19F690u;
    {
        const bool branch_taken_0x19f690 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F690u;
        // 0x19f694: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f690) {
            ctx->pc = 0x19F6D0u;
            return;
        }
    }
    ctx->pc = 0x19F698u;
    // 0x19f698: 0x8e820684  lw          $v0, 0x684($s4)
    ctx->pc = 0x19f698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1668)));
    // 0x19f69c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F69Cu;
    {
        const bool branch_taken_0x19f69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F69Cu;
        // 0x19f6a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f69c) {
            ctx->pc = 0x19F6BCu;
            return;
        }
    }
    ctx->pc = 0x19F6A4u;
    // 0x19f6a4: 0xac400320  sw          $zero, 0x320($v0)
    ctx->pc = 0x19f6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 800), GPR_U32(ctx, 0));
    // 0x19f6a8: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19F6A8u;
    SET_GPR_U32(ctx, 31, 0x19F6B0u);
    ctx->pc = 0x19F6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F6A8u;
    // 0x19f6ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19F6A8u, 0x19F6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F6B0u;
label_19f6b0:
    // 0x19f6b0: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x19F6B0u;
    {
        const bool branch_taken_0x19f6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f6b0) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F6B8u;
    // 0x19f6b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f6bcu;
}
