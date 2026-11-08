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

// Function: FUN_001cc120
// Address: 0x1cc120 - 0x1cc1e8
void FUN_001cc120_0x1cc120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc120_0x1cc120");
#endif

    switch (ctx->pc) {
        case 0x1cc140u: goto label_1cc140;
        case 0x1cc190u: goto label_1cc190;
        default: break;
    }

    ctx->pc = 0x1cc120u;

    // 0x1cc120: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cc120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cc124: 0x10a3002d  beq         $a1, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1CC124u;
    {
        const bool branch_taken_0x1cc124 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CC128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC124u;
        // 0x1cc128: 0x240600e0  addiu       $a2, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc124) {
            ctx->pc = 0x1CC1DCu;
            goto label_1cc1dc;
        }
    }
    ctx->pc = 0x1CC12Cu;
    // 0x1cc12c: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x1cc12cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cc130: 0xe43823  subu        $a3, $a3, $a0
    ctx->pc = 0x1cc130u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1cc134: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1cc134u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cc138: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1cc138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1cc13c: 0x460c0  sll         $t4, $a0, 3
    ctx->pc = 0x1cc13cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1cc140:
    // 0x1cc140: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cc140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cc144: 0x2467ffff  addiu       $a3, $v1, -0x1
    ctx->pc = 0x1cc144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cc148: 0x8c29ca84  lw          $t1, -0x357C($at)
    ctx->pc = 0x1cc148u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1cc14c: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1cc14cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1cc150: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x1cc150u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1cc154: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1cc154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cc158: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1cc158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cc15c: 0x12c3821  addu        $a3, $t1, $t4
    ctx->pc = 0x1cc15cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x1cc160: 0xe45821  addu        $t3, $a3, $a0
    ctx->pc = 0x1cc160u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1cc164: 0xdd640060  ld          $a0, 0x60($t3)
    ctx->pc = 0x1cc164u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 96)));
    // 0x1cc168: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x1cc168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1cc16c: 0x256e0060  addiu       $t6, $t3, 0x60
    ctx->pc = 0x1cc16cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 96));
    // 0x1cc170: 0x24ed0060  addiu       $t5, $a3, 0x60
    ctx->pc = 0x1cc170u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x1cc174: 0x25ca0010  addiu       $t2, $t6, 0x10
    ctx->pc = 0x1cc174u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x1cc178: 0x25a90010  addiu       $t1, $t5, 0x10
    ctx->pc = 0x1cc178u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x1cc17c: 0xfce40060  sd          $a0, 0x60($a3)
    ctx->pc = 0x1cc17cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 96), GPR_U64(ctx, 4));
    // 0x1cc180: 0x8d640068  lw          $a0, 0x68($t3)
    ctx->pc = 0x1cc180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 104)));
    // 0x1cc184: 0xace40068  sw          $a0, 0x68($a3)
    ctx->pc = 0x1cc184u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 104), GPR_U32(ctx, 4));
    // 0x1cc188: 0x8d64006c  lw          $a0, 0x6C($t3)
    ctx->pc = 0x1cc188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 108)));
    // 0x1cc18c: 0xace4006c  sw          $a0, 0x6C($a3)
    ctx->pc = 0x1cc18cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 108), GPR_U32(ctx, 4));
label_1cc190:
    // 0x1cc190: 0x81470000  lb          $a3, 0x0($t2)
    ctx->pc = 0x1cc190u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1cc194: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1cc194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1cc198: 0x81440001  lb          $a0, 0x1($t2)
    ctx->pc = 0x1cc198u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x1cc19c: 0xa1270000  sb          $a3, 0x0($t1)
    ctx->pc = 0x1cc19cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1cc1a0: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x1cc1a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x1cc1a4: 0xa1240001  sb          $a0, 0x1($t1)
    ctx->pc = 0x1cc1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cc1a8: 0x1d00fff9  bgtz        $t0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CC1A8u;
    {
        const bool branch_taken_0x1cc1a8 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x1CC1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1A8u;
        // 0x1cc1ac: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc1a8) {
            ctx->pc = 0x1CC190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc190;
        }
    }
    ctx->pc = 0x1CC1B0u;
    // 0x1cc1b0: 0x91c70030  lbu         $a3, 0x30($t6)
    ctx->pc = 0x1cc1b0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 48)));
    // 0x1cc1b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1cc1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cc1b8: 0x91c40031  lbu         $a0, 0x31($t6)
    ctx->pc = 0x1cc1b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 49)));
    // 0x1cc1bc: 0x24c6ffc8  addiu       $a2, $a2, -0x38
    ctx->pc = 0x1cc1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967240));
    // 0x1cc1c0: 0xa1a70030  sb          $a3, 0x30($t5)
    ctx->pc = 0x1cc1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 48), (uint8_t)GPR_U32(ctx, 7));
    // 0x1cc1c4: 0xa1a40031  sb          $a0, 0x31($t5)
    ctx->pc = 0x1cc1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 49), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cc1c8: 0x91c70032  lbu         $a3, 0x32($t6)
    ctx->pc = 0x1cc1c8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 50)));
    // 0x1cc1cc: 0x91c40033  lbu         $a0, 0x33($t6)
    ctx->pc = 0x1cc1ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 51)));
    // 0x1cc1d0: 0xa1a70032  sb          $a3, 0x32($t5)
    ctx->pc = 0x1cc1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 50), (uint8_t)GPR_U32(ctx, 7));
    // 0x1cc1d4: 0x1465ffda  bne         $v1, $a1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1CC1D4u;
    {
        const bool branch_taken_0x1cc1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1CC1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1D4u;
        // 0x1cc1d8: 0xa1a40033  sb          $a0, 0x33($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 51), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc1d4) {
            ctx->pc = 0x1CC140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc140;
        }
    }
    ctx->pc = 0x1CC1DCu;
label_1cc1dc:
    // 0x1cc1dc: 0x0  nop
    ctx->pc = 0x1cc1dcu;
    // NOP
    // 0x1cc1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC1E8u;
}
