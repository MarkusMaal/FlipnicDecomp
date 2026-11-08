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

// Function: FUN_0010af20
// Address: 0x10af20 - 0x10afb4
void FUN_0010af20_0x10af20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010af20_0x10af20");
#endif

    switch (ctx->pc) {
        case 0x10af40u: goto label_10af40;
        case 0x10af4cu: goto label_10af4c;
        case 0x10afa0u: goto label_10afa0;
        default: break;
    }

    ctx->pc = 0x10af20u;

    // 0x10af20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10af20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10af24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10af24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10af28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10af28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10af2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10af2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10af30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10af30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af34: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x10af34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af38: 0xc046458  jal         func_119160
    ctx->pc = 0x10AF38u;
    SET_GPR_U32(ctx, 31, 0x10AF40u);
    ctx->pc = 0x10AF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF38u;
    // 0x10af3c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x10AF38u, 0x10AF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF40u;
label_10af40:
    // 0x10af40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10af40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af44: 0xc046458  jal         func_119160
    ctx->pc = 0x10AF44u;
    SET_GPR_U32(ctx, 31, 0x10AF4Cu);
    ctx->pc = 0x10AF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF44u;
    // 0x10af48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x10AF44u, 0x10AF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF4Cu;
label_10af4c:
    // 0x10af4c: 0xa6300428  sh          $s0, 0x428($s1)
    ctx->pc = 0x10af4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1064), (uint16_t)GPR_U32(ctx, 16));
    // 0x10af50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10af50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af54: 0xa622042a  sh          $v0, 0x42A($s1)
    ctx->pc = 0x10af54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1066), (uint16_t)GPR_U32(ctx, 2));
    // 0x10af58: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x10af58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10af5c: 0xa6300838  sh          $s0, 0x838($s1)
    ctx->pc = 0x10af5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2104), (uint16_t)GPR_U32(ctx, 16));
    // 0x10af60: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x10af60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x10af64: 0xa622083a  sh          $v0, 0x83A($s1)
    ctx->pc = 0x10af64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2106), (uint16_t)GPR_U32(ctx, 2));
    // 0x10af68: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x10af68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10af6c: 0xa6300c48  sh          $s0, 0xC48($s1)
    ctx->pc = 0x10af6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3144), (uint16_t)GPR_U32(ctx, 16));
    // 0x10af70: 0xa6220c4a  sh          $v0, 0xC4A($s1)
    ctx->pc = 0x10af70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3146), (uint16_t)GPR_U32(ctx, 2));
    // 0x10af74: 0xa6301058  sh          $s0, 0x1058($s1)
    ctx->pc = 0x10af74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4184), (uint16_t)GPR_U32(ctx, 16));
    // 0x10af78: 0xa622105a  sh          $v0, 0x105A($s1)
    ctx->pc = 0x10af78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4186), (uint16_t)GPR_U32(ctx, 2));
    // 0x10af7c: 0xa6301468  sh          $s0, 0x1468($s1)
    ctx->pc = 0x10af7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 5224), (uint16_t)GPR_U32(ctx, 16));
    // 0x10af80: 0xa622146a  sh          $v0, 0x146A($s1)
    ctx->pc = 0x10af80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 5226), (uint16_t)GPR_U32(ctx, 2));
    // 0x10af84: 0xa6301878  sh          $s0, 0x1878($s1)
    ctx->pc = 0x10af84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6264), (uint16_t)GPR_U32(ctx, 16));
    // 0x10af88: 0xa622187a  sh          $v0, 0x187A($s1)
    ctx->pc = 0x10af88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6266), (uint16_t)GPR_U32(ctx, 2));
    // 0x10af8c: 0xa6301c88  sh          $s0, 0x1C88($s1)
    ctx->pc = 0x10af8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 7304), (uint16_t)GPR_U32(ctx, 16));
    // 0x10af90: 0xa6221c8a  sh          $v0, 0x1C8A($s1)
    ctx->pc = 0x10af90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 7306), (uint16_t)GPR_U32(ctx, 2));
    // 0x10af94: 0xa6302098  sh          $s0, 0x2098($s1)
    ctx->pc = 0x10af94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8344), (uint16_t)GPR_U32(ctx, 16));
    // 0x10af98: 0xc042c0c  jal         func_10B030
    ctx->pc = 0x10AF98u;
    SET_GPR_U32(ctx, 31, 0x10AFA0u);
    ctx->pc = 0x10AF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF98u;
    // 0x10af9c: 0xa622209a  sh          $v0, 0x209A($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 8346), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B030u, 0x10AF98u, 0x10AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AFA0u;
label_10afa0:
    // 0x10afa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10afa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10afa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10afa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10afa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10afa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10afac: 0x3e00008  jr          $ra
    ctx->pc = 0x10AFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AFACu;
        // 0x10afb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AFB4u;
}
