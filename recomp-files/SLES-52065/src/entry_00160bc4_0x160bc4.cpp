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

// Function: entry_00160bc4
// Address: 0x160bc4 - 0x160cb4
void entry_00160bc4_0x160bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160bc4_0x160bc4");
#endif

    ctx->pc = 0x160bc4u;

label_160bc4:
    // 0x160bc4: 0x8ea7001c  lw          $a3, 0x1C($s5)
    ctx->pc = 0x160bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160bc8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x160bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x160bcc: 0x64302a  slt         $a2, $v1, $a0
    ctx->pc = 0x160bccu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x160bd0: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x160bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x160bd4: 0x90e7003f  lbu         $a3, 0x3F($a3)
    ctx->pc = 0x160bd4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 63)));
    // 0x160bd8: 0x474021  addu        $t0, $v0, $a3
    ctx->pc = 0x160bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x160bdc: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x160bdcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x160be0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x160be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x160be4: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x160be4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x160be8: 0x8ea7001c  lw          $a3, 0x1C($s5)
    ctx->pc = 0x160be8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160bec: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x160becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x160bf0: 0x90e7008f  lbu         $a3, 0x8F($a3)
    ctx->pc = 0x160bf0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 143)));
    // 0x160bf4: 0x474021  addu        $t0, $v0, $a3
    ctx->pc = 0x160bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x160bf8: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x160bf8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x160bfc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x160bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x160c00: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x160c00u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x160c04: 0x8ea7001c  lw          $a3, 0x1C($s5)
    ctx->pc = 0x160c04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160c08: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x160c08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x160c0c: 0x90e700df  lbu         $a3, 0xDF($a3)
    ctx->pc = 0x160c0cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 223)));
    // 0x160c10: 0x474021  addu        $t0, $v0, $a3
    ctx->pc = 0x160c10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x160c14: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x160c14u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x160c18: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x160c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x160c1c: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x160c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x160c20: 0x8ea7001c  lw          $a3, 0x1C($s5)
    ctx->pc = 0x160c20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160c24: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x160c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x160c28: 0x90e7012f  lbu         $a3, 0x12F($a3)
    ctx->pc = 0x160c28u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 303)));
    // 0x160c2c: 0x474021  addu        $t0, $v0, $a3
    ctx->pc = 0x160c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x160c30: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x160c30u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x160c34: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x160c34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x160c38: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x160c38u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x160c3c: 0x8ea7001c  lw          $a3, 0x1C($s5)
    ctx->pc = 0x160c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160c40: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x160c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x160c44: 0x90e7017f  lbu         $a3, 0x17F($a3)
    ctx->pc = 0x160c44u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 383)));
    // 0x160c48: 0x474021  addu        $t0, $v0, $a3
    ctx->pc = 0x160c48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x160c4c: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x160c4cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x160c50: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x160c50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x160c54: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x160c54u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x160c58: 0x8ea7001c  lw          $a3, 0x1C($s5)
    ctx->pc = 0x160c58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160c5c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x160c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x160c60: 0x90e701cf  lbu         $a3, 0x1CF($a3)
    ctx->pc = 0x160c60u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 463)));
    // 0x160c64: 0x474021  addu        $t0, $v0, $a3
    ctx->pc = 0x160c64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x160c68: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x160c68u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x160c6c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x160c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x160c70: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x160c70u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x160c74: 0x8ea7001c  lw          $a3, 0x1C($s5)
    ctx->pc = 0x160c74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160c78: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x160c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x160c7c: 0x90e7021f  lbu         $a3, 0x21F($a3)
    ctx->pc = 0x160c7cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 543)));
    // 0x160c80: 0x474021  addu        $t0, $v0, $a3
    ctx->pc = 0x160c80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x160c84: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x160c84u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x160c88: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x160c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x160c8c: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x160c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x160c90: 0x8ea7001c  lw          $a3, 0x1C($s5)
    ctx->pc = 0x160c90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160c94: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x160c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x160c98: 0x90e7026f  lbu         $a3, 0x26F($a3)
    ctx->pc = 0x160c98u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 623)));
    // 0x160c9c: 0x24a50280  addiu       $a1, $a1, 0x280
    ctx->pc = 0x160c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
    // 0x160ca0: 0x474021  addu        $t0, $v0, $a3
    ctx->pc = 0x160ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x160ca4: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x160ca4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x160ca8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x160ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x160cac: 0x14c0ffc5  bnez        $a2, . + 4 + (-0x3B << 2)
    ctx->pc = 0x160CACu;
    {
        const bool branch_taken_0x160cac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x160CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CACu;
        // 0x160cb0: 0xa1070000  sb          $a3, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cac) {
            ctx->pc = 0x160BC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160bc4;
        }
    }
    ctx->pc = 0x160CB4u;
}
