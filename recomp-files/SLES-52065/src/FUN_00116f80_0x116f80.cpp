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

// Function: FUN_00116f80
// Address: 0x116f80 - 0x1170bc
void FUN_00116f80_0x116f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00116f80_0x116f80");
#endif

    ctx->pc = 0x116f80u;

    // 0x116f80: 0x9583c  dsll32      $t3, $t1, 0
    ctx->pc = 0x116f80u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) << (32 + 0));
    // 0x116f84: 0xa1982  srl         $v1, $t2, 6
    ctx->pc = 0x116f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 6));
    // 0x116f88: 0xa74821  addu        $t1, $a1, $a3
    ctx->pc = 0x116f88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x116f8c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x116f8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x116f90: 0xc83821  addu        $a3, $a2, $t0
    ctx->pc = 0x116f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x116f94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x116f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x116f98: 0xa4082  srl         $t0, $t2, 2
    ctx->pc = 0x116f98u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 2));
    // 0x116f9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x116f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x116fa0: 0x350c0  sll         $t2, $v1, 3
    ctx->pc = 0x116fa0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x116fa4: 0x369c0  sll         $t5, $v1, 7
    ctx->pc = 0x116fa4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x116fa8: 0x3108000f  andi        $t0, $t0, 0xF
    ctx->pc = 0x116fa8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x116fac: 0x25430007  addiu       $v1, $t2, 0x7
    ctx->pc = 0x116facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 7));
    // 0x116fb0: 0x850c0  sll         $t2, $t0, 3
    ctx->pc = 0x116fb0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x116fb4: 0x871c0  sll         $t6, $t0, 7
    ctx->pc = 0x116fb4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
    // 0x116fb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x116fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x116fbc: 0x25480007  addiu       $t0, $t2, 0x7
    ctx->pc = 0x116fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 7));
    // 0x116fc0: 0x85100  sll         $t2, $t0, 4
    ctx->pc = 0x116fc0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x116fc4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x116fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x116fc8: 0x2468000f  addiu       $t0, $v1, 0xF
    ctx->pc = 0x116fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x116fcc: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x116fccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x116fd0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x116fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x116fd4: 0x3c0c5000  lui         $t4, 0x5000
    ctx->pc = 0x116fd4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)20480 << 16));
    // 0x116fd8: 0x34720004  ori         $s2, $v1, 0x4
    ctx->pc = 0x116fd8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x116fdc: 0x35900004  ori         $s0, $t4, 0x4
    ctx->pc = 0x116fdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)4);
    // 0x116fe0: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x116fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x116fe4: 0x340c8001  ori         $t4, $zero, 0x8001
    ctx->pc = 0x116fe4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x116fe8: 0x3783c  dsll32      $t7, $v1, 0
    ctx->pc = 0x116fe8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) << (32 + 0));
    // 0x116fec: 0x254a000f  addiu       $t2, $t2, 0xF
    ctx->pc = 0x116fecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 15));
    // 0x116ff0: 0x18fc825  or          $t9, $t4, $t7
    ctx->pc = 0x116ff0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 12) | GPR_U64(ctx, 15));
    // 0x116ff4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x116ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x116ff8: 0xfe320000  sd          $s2, 0x0($s1)
    ctx->pc = 0x116ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 18));
    // 0x116ffc: 0x34783530  ori         $t8, $v1, 0x3530
    ctx->pc = 0x116ffcu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13616);
    // 0x117000: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x117000u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117004: 0x240f0156  addiu       $t7, $zero, 0x156
    ctx->pc = 0x117004u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x117008: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x117008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11700c: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x11700cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
    // 0x117010: 0xad800008  sw          $zero, 0x8($t4)
    ctx->pc = 0x117010u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 0));
    // 0x117014: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x117014u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117018: 0xad90000c  sw          $s0, 0xC($t4)
    ctx->pc = 0x117018u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 16));
    // 0x11701c: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x11701cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117020: 0xfd990010  sd          $t9, 0x10($t4)
    ctx->pc = 0x117020u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 25));
    // 0x117024: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x117024u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117028: 0xfd980018  sd          $t8, 0x18($t4)
    ctx->pc = 0x117028u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 24));
    // 0x11702c: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x11702cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117030: 0xfd8f0020  sd          $t7, 0x20($t4)
    ctx->pc = 0x117030u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 32), GPR_U64(ctx, 15));
    // 0x117034: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x117034u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117038: 0xa58e0028  sh          $t6, 0x28($t4)
    ctx->pc = 0x117038u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 40), (uint16_t)GPR_U32(ctx, 14));
    // 0x11703c: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x11703cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117040: 0xa58d002a  sh          $t5, 0x2A($t4)
    ctx->pc = 0x117040u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 42), (uint16_t)GPR_U32(ctx, 13));
    // 0x117044: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x117044u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117048: 0xad80002c  sw          $zero, 0x2C($t4)
    ctx->pc = 0x117048u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 44), GPR_U32(ctx, 0));
    // 0x11704c: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x11704cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117050: 0xa5850030  sh          $a1, 0x30($t4)
    ctx->pc = 0x117050u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x117054: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x117054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117058: 0xa4a60032  sh          $a2, 0x32($a1)
    ctx->pc = 0x117058u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 50), (uint16_t)GPR_U32(ctx, 6));
    // 0x11705c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x11705cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117060: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x117060u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x117064: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x117064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117068: 0xa4aa0038  sh          $t2, 0x38($a1)
    ctx->pc = 0x117068u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 56), (uint16_t)GPR_U32(ctx, 10));
    // 0x11706c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x11706cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117070: 0xa4a8003a  sh          $t0, 0x3A($a1)
    ctx->pc = 0x117070u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 58), (uint16_t)GPR_U32(ctx, 8));
    // 0x117074: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x117074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117078: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x117078u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    // 0x11707c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x11707cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117080: 0xfcab0040  sd          $t3, 0x40($a1)
    ctx->pc = 0x117080u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 11));
    // 0x117084: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x117084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117088: 0xa4a90048  sh          $t1, 0x48($a1)
    ctx->pc = 0x117088u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 72), (uint16_t)GPR_U32(ctx, 9));
    // 0x11708c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x11708cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117090: 0xa4a7004a  sh          $a3, 0x4A($a1)
    ctx->pc = 0x117090u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 74), (uint16_t)GPR_U32(ctx, 7));
    // 0x117094: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x117094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117098: 0xaca3004c  sw          $v1, 0x4C($a1)
    ctx->pc = 0x117098u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 3));
    // 0x11709c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x11709cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1170a0: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x1170a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1170a4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1170a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1170a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1170a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1170ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1170acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1170b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1170b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1170b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1170B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1170B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170B4u;
        // 0x1170b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1170B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1170BCu;
}
