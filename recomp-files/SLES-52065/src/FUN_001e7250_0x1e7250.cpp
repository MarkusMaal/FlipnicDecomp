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

// Function: FUN_001e7250
// Address: 0x1e7250 - 0x1e72b4
void FUN_001e7250_0x1e7250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e7250_0x1e7250");
#endif

    switch (ctx->pc) {
        case 0x1e7278u: goto label_1e7278;
        case 0x1e7284u: goto label_1e7284;
        default: break;
    }

    ctx->pc = 0x1e7250u;

    // 0x1e7250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e7250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e7254: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e7254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e7258: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e7258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e725c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e725cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7260: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7264: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e7264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7268: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e7268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e726c: 0x230082b  sltu        $at, $s1, $s0
    ctx->pc = 0x1e726cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1e7270: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7270u;
    {
        const bool branch_taken_0x1e7270 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7270u;
        // 0x1e7274: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7270) {
            ctx->pc = 0x1E7298u;
            goto label_1e7298;
        }
    }
    ctx->pc = 0x1E7278u;
label_1e7278:
    // 0x1e7278: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x1e7278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1e727c: 0xc07a200  jal         func_1E8800
    ctx->pc = 0x1E727Cu;
    SET_GPR_U32(ctx, 31, 0x1E7284u);
    ctx->pc = 0x1E7280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E727Cu;
    // 0x1e7280: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8800u, 0x1E727Cu, 0x1E7284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7284u;
label_1e7284:
    // 0x1e7284: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x1e7284u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e7288: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1e7288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1e728c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x1e728cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1e7290: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E7290u;
    {
        const bool branch_taken_0x1e7290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7290) {
            ctx->pc = 0x1E7278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7278;
        }
    }
    ctx->pc = 0x1E7298u;
label_1e7298:
    // 0x1e7298: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e7298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e729c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e729cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e72a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e72a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e72a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e72a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e72a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e72a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e72ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E72ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E72B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E72ACu;
        // 0x1e72b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E72ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E72B4u;
}
