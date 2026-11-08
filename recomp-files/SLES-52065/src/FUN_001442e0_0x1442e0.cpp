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

// Function: FUN_001442e0
// Address: 0x1442e0 - 0x144354
void FUN_001442e0_0x1442e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001442e0_0x1442e0");
#endif

    switch (ctx->pc) {
        case 0x144310u: goto label_144310;
        case 0x144324u: goto label_144324;
        default: break;
    }

    ctx->pc = 0x1442e0u;

    // 0x1442e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1442e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1442e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1442e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1442e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1442e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1442ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1442ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1442f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1442f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1442f4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1442f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1442f8: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x1442f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1442fc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1442fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x144300: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x144300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x144304: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x144304u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x144308: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x144308u;
    {
        const bool branch_taken_0x144308 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144308u;
        // 0x14430c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144308) {
            ctx->pc = 0x144334u;
            goto label_144334;
        }
    }
    ctx->pc = 0x144310u;
label_144310:
    // 0x144310: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x144310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x144314: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x144314u;
    {
        const bool branch_taken_0x144314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x144314) {
            ctx->pc = 0x144324u;
            goto label_144324;
        }
    }
    ctx->pc = 0x14431Cu;
    // 0x14431c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14431Cu;
    SET_GPR_U32(ctx, 31, 0x144324u);
    ctx->pc = 0x144320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14431Cu;
    // 0x144320: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14431Cu, 0x144324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144324u;
label_144324:
    // 0x144324: 0x0  nop
    ctx->pc = 0x144324u;
    // NOP
    // 0x144328: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x144328u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14432c: 0x1420fff8  bnez        $at, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14432Cu;
    {
        const bool branch_taken_0x14432c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14432c) {
            ctx->pc = 0x144310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144310;
        }
    }
    ctx->pc = 0x144334u;
label_144334:
    // 0x144334: 0x0  nop
    ctx->pc = 0x144334u;
    // NOP
    // 0x144338: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x144338u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x14433c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14433cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144340: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144340u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144344: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144348: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14434c: 0x3e00008  jr          $ra
    ctx->pc = 0x14434Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14434Cu;
        // 0x144350: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14434Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144354u;
}
