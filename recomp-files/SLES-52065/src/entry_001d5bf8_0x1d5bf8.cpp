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

// Function: entry_001d5bf8
// Address: 0x1d5bf8 - 0x1d5c30
void entry_001d5bf8_0x1d5bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5bf8_0x1d5bf8");
#endif

    switch (ctx->pc) {
        case 0x1d5c1cu: goto label_1d5c1c;
        default: break;
    }

    ctx->pc = 0x1d5bf8u;

    // 0x1d5bf8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d5bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d5bfc: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x1d5bfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d5c00: 0x24420558  addiu       $v0, $v0, 0x558
    ctx->pc = 0x1d5c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1368));
    // 0x1d5c04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d5c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c08: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1d5c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d5c0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5c10: 0xacb20030  sw          $s2, 0x30($a1)
    ctx->pc = 0x1d5c10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 18));
    // 0x1d5c14: 0xc0772f8  jal         func_1DCBE0
    ctx->pc = 0x1D5C14u;
    SET_GPR_U32(ctx, 31, 0x1D5C1Cu);
    ctx->pc = 0x1D5C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5C14u;
    // 0x1d5c18: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBE0u, 0x1D5C14u, 0x1D5C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5C1Cu;
label_1d5c1c:
    // 0x1d5c1c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d5c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d5c20: 0x600014d  bltz        $s0, . + 4 + (0x14D << 2)
    ctx->pc = 0x1D5C20u;
    {
        const bool branch_taken_0x1d5c20 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D5C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C20u;
        // 0x1d5c24: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c20) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5C28u;
    // 0x1d5c28: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d5c28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d5c2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1d5c30u;
}
