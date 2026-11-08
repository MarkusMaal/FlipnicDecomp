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

// Function: FUN_001af940
// Address: 0x1af940 - 0x1af994
void FUN_001af940_0x1af940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af940_0x1af940");
#endif

    switch (ctx->pc) {
        case 0x1af960u: goto label_1af960;
        case 0x1af96cu: goto label_1af96c;
        default: break;
    }

    ctx->pc = 0x1af940u;

    // 0x1af940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1af940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1af944: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1af944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1af948: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1af948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1af94c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1af950: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1af950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af954: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1af954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1af958: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1af958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af95c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1af95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af960:
    // 0x1af960: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x1af960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1af964: 0xc04c178  jal         func_1305E0
    ctx->pc = 0x1AF964u;
    SET_GPR_U32(ctx, 31, 0x1AF96Cu);
    ctx->pc = 0x1AF968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF964u;
    // 0x1af968: 0x8c440100  lw          $a0, 0x100($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1305E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305E0u, 0x1AF964u, 0x1AF96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF96Cu;
label_1af96c:
    // 0x1af96c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1af96cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1af970: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x1af970u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1af974: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AF974u;
    {
        const bool branch_taken_0x1af974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF974u;
        // 0x1af978: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af974) {
            ctx->pc = 0x1AF960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af960;
        }
    }
    ctx->pc = 0x1AF97Cu;
    // 0x1af97c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1af97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af980: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1af980u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af98c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF98Cu;
        // 0x1af990: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF994u;
}
