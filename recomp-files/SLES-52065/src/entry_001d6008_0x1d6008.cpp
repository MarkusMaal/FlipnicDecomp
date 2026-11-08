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

// Function: entry_001d6008
// Address: 0x1d6008 - 0x1d6060
void entry_001d6008_0x1d6008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6008_0x1d6008");
#endif

    switch (ctx->pc) {
        case 0x1d604cu: goto label_1d604c;
        default: break;
    }

    ctx->pc = 0x1d6008u;

    // 0x1d6008: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1d6008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1d600c: 0x240709e4  addiu       $a3, $zero, 0x9E4
    ctx->pc = 0x1d600cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d6010: 0x2873818  mult        $a3, $s4, $a3
    ctx->pc = 0x1d6010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1d6014: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x1d6014u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d6018: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d6018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d601c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d601cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1d6020: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1d6020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d6024: 0x24630558  addiu       $v1, $v1, 0x558
    ctx->pc = 0x1d6024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1368));
    // 0x1d6028: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d6028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d602c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d602cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6030: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1d6030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1d6034: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1d6034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1d6038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d603c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d603cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6040: 0xac5302b0  sw          $s3, 0x2B0($v0)
    ctx->pc = 0x1d6040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 19));
    // 0x1d6044: 0xc07730c  jal         func_1DCC30
    ctx->pc = 0x1D6044u;
    SET_GPR_U32(ctx, 31, 0x1D604Cu);
    ctx->pc = 0x1D6048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6044u;
    // 0x1d6048: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCC30u, 0x1D6044u, 0x1D604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D604Cu;
label_1d604c:
    // 0x1d604c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d604cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d6050: 0x6000041  bltz        $s0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1D6050u;
    {
        const bool branch_taken_0x1d6050 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D6054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6050u;
        // 0x1d6054: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6050) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D6058u;
    // 0x1d6058: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d6058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d605c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d605cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1d6060u;
}
