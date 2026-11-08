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

// Function: entry_001d5f90
// Address: 0x1d5f90 - 0x1d5fe8
void entry_001d5f90_0x1d5f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5f90_0x1d5f90");
#endif

    switch (ctx->pc) {
        case 0x1d5fd4u: goto label_1d5fd4;
        default: break;
    }

    ctx->pc = 0x1d5f90u;

    // 0x1d5f90: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1d5f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1d5f94: 0x240709e4  addiu       $a3, $zero, 0x9E4
    ctx->pc = 0x1d5f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5f98: 0x2873818  mult        $a3, $s4, $a3
    ctx->pc = 0x1d5f98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1d5f9c: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x1d5f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d5fa0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d5fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d5fa4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d5fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1d5fa8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1d5fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d5fac: 0x24630558  addiu       $v1, $v1, 0x558
    ctx->pc = 0x1d5facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1368));
    // 0x1d5fb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d5fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d5fb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d5fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5fb8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1d5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d5fbc: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1d5fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1d5fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5fc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d5fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5fc8: 0xac5302b8  sw          $s3, 0x2B8($v0)
    ctx->pc = 0x1d5fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 696), GPR_U32(ctx, 19));
    // 0x1d5fcc: 0xc07730c  jal         func_1DCC30
    ctx->pc = 0x1D5FCCu;
    SET_GPR_U32(ctx, 31, 0x1D5FD4u);
    ctx->pc = 0x1D5FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5FCCu;
    // 0x1d5fd0: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCC30u, 0x1D5FCCu, 0x1D5FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5FD4u;
label_1d5fd4:
    // 0x1d5fd4: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d5fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d5fd8: 0x600005f  bltz        $s0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1D5FD8u;
    {
        const bool branch_taken_0x1d5fd8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FD8u;
        // 0x1d5fdc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5fd8) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5FE0u;
    // 0x1d5fe0: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d5fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d5fe4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1d5fe8u;
}
