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

// Function: entry_001cbd38
// Address: 0x1cbd38 - 0x1cbddc
void entry_001cbd38_0x1cbd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbd38_0x1cbd38");
#endif

    switch (ctx->pc) {
        case 0x1cbdc8u: goto label_1cbdc8;
        default: break;
    }

    ctx->pc = 0x1cbd38u;

label_1cbd38:
    // 0x1cbd38: 0x81040000  lb          $a0, 0x0($t0)
    ctx->pc = 0x1cbd38u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1cbd3c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1cbd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1cbd40: 0x81030001  lb          $v1, 0x1($t0)
    ctx->pc = 0x1cbd40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x1cbd44: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x1cbd44u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cbd48: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x1cbd48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x1cbd4c: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x1cbd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cbd50: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CBD50u;
    {
        const bool branch_taken_0x1cbd50 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1CBD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD50u;
        // 0x1cbd54: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd50) {
            ctx->pc = 0x1CBD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbd38;
        }
    }
    ctx->pc = 0x1CBD58u;
    // 0x1cbd58: 0x91aa0030  lbu         $t2, 0x30($t5)
    ctx->pc = 0x1cbd58u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 48)));
    // 0x1cbd5c: 0x3c080022  lui         $t0, 0x22
    ctx->pc = 0x1cbd5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34 << 16));
    // 0x1cbd60: 0x91a30031  lbu         $v1, 0x31($t5)
    ctx->pc = 0x1cbd60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 49)));
    // 0x1cbd64: 0x27ac0040  addiu       $t4, $sp, 0x40
    ctx->pc = 0x1cbd64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cbd68: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x1cbd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cbd6c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1cbd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1cbd70: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cbd70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cbd74: 0x27ab0042  addiu       $t3, $sp, 0x42
    ctx->pc = 0x1cbd74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
    // 0x1cbd78: 0x25088060  addiu       $t0, $t0, -0x7FA0
    ctx->pc = 0x1cbd78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294934624));
    // 0x1cbd7c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1cbd7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cbd80: 0x2484f970  addiu       $a0, $a0, -0x690
    ctx->pc = 0x1cbd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965616));
    // 0x1cbd84: 0xa18a0000  sb          $t2, 0x0($t4)
    ctx->pc = 0x1cbd84u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x1cbd88: 0xa1830001  sb          $v1, 0x1($t4)
    ctx->pc = 0x1cbd88u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cbd8c: 0x91aa0032  lbu         $t2, 0x32($t5)
    ctx->pc = 0x1cbd8cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 50)));
    // 0x1cbd90: 0x91a30033  lbu         $v1, 0x33($t5)
    ctx->pc = 0x1cbd90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 51)));
    // 0x1cbd94: 0xa16a0000  sb          $t2, 0x0($t3)
    ctx->pc = 0x1cbd94u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x1cbd98: 0xa1630001  sb          $v1, 0x1($t3)
    ctx->pc = 0x1cbd98u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cbd9c: 0xdd030000  ld          $v1, 0x0($t0)
    ctx->pc = 0x1cbd9cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x218060u));
    // 0x1cbda0: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x1cbda0u;
    { uint32_t bits = FAST_READ32(0x218068u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbda4: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x1cbda4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x1cbda8: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x1cbda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x1cbdac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cbdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbdb0: 0xdfa70010  ld          $a3, 0x10($sp)
    ctx->pc = 0x1cbdb0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cbdb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cbdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cbdb8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1cbdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1cbdbc: 0x8c480050  lw          $t0, 0x50($v0)
    ctx->pc = 0x1cbdbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1cbdc0: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1CBDC0u;
    SET_GPR_U32(ctx, 31, 0x1CBDC8u);
    ctx->pc = 0x1CBDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBDC0u;
    // 0x1cbdc4: 0x24a529b0  addiu       $a1, $a1, 0x29B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1CBDC0u, 0x1CBDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBDC8u;
label_1cbdc8:
    // 0x1cbdc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cbdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbdcc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cbdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1cbdd0: 0x2442f970  addiu       $v0, $v0, -0x690
    ctx->pc = 0x1cbdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965616));
    // 0x1cbdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDD4u;
        // 0x1cbdd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBDDCu;
}
