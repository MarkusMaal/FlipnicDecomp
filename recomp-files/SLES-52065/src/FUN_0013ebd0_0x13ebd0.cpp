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

// Function: FUN_0013ebd0
// Address: 0x13ebd0 - 0x13ece8
void FUN_0013ebd0_0x13ebd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013ebd0_0x13ebd0");
#endif

    ctx->pc = 0x13ebd0u;

    // 0x13ebd0: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ebd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ebd4: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x13ebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x13ebd8: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x13ebd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13ebdc: 0x3c057f7f  lui         $a1, 0x7F7F
    ctx->pc = 0x13ebdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32639 << 16));
    // 0x13ebe0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x13ebe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x13ebe4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x13ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x13ebe8: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x13ebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x13ebec: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ebecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ebf0: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x13ebf0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x13ebf4: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ebf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ebf8: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x13ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
    // 0x13ebfc: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ebfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ec00: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x13ec00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x13ec04: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ec04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ec08: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x13ec08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
    // 0x13ec0c: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ec0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ec10: 0xace50014  sw          $a1, 0x14($a3)
    ctx->pc = 0x13ec10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
    // 0x13ec14: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ec14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ec18: 0xace50018  sw          $a1, 0x18($a3)
    ctx->pc = 0x13ec18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 5));
    // 0x13ec1c: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ec1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ec20: 0xace3001c  sw          $v1, 0x1C($a3)
    ctx->pc = 0x13ec20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 3));
    // 0x13ec24: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ec24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ec28: 0xace60020  sw          $a2, 0x20($a3)
    ctx->pc = 0x13ec28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 6));
    // 0x13ec2c: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ec2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ec30: 0xace50024  sw          $a1, 0x24($a3)
    ctx->pc = 0x13ec30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 5));
    // 0x13ec34: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ec34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ec38: 0xace60028  sw          $a2, 0x28($a3)
    ctx->pc = 0x13ec38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 6));
    // 0x13ec3c: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ec3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ec40: 0xace3002c  sw          $v1, 0x2C($a3)
    ctx->pc = 0x13ec40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 3));
    // 0x13ec44: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ec44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ec48: 0xace50030  sw          $a1, 0x30($a3)
    ctx->pc = 0x13ec48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 5));
    // 0x13ec4c: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ec4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ec50: 0xace50034  sw          $a1, 0x34($a3)
    ctx->pc = 0x13ec50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 5));
    // 0x13ec54: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ec54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ec58: 0xace60038  sw          $a2, 0x38($a3)
    ctx->pc = 0x13ec58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 6));
    // 0x13ec5c: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ec5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ec60: 0xace3003c  sw          $v1, 0x3C($a3)
    ctx->pc = 0x13ec60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 3));
    // 0x13ec64: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ec64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ec68: 0xace60040  sw          $a2, 0x40($a3)
    ctx->pc = 0x13ec68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 6));
    // 0x13ec6c: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ec6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ec70: 0xace60044  sw          $a2, 0x44($a3)
    ctx->pc = 0x13ec70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 6));
    // 0x13ec74: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ec74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ec78: 0xace50048  sw          $a1, 0x48($a3)
    ctx->pc = 0x13ec78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 5));
    // 0x13ec7c: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ec7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ec80: 0xace3004c  sw          $v1, 0x4C($a3)
    ctx->pc = 0x13ec80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 3));
    // 0x13ec84: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ec84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ec88: 0xace50050  sw          $a1, 0x50($a3)
    ctx->pc = 0x13ec88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 5));
    // 0x13ec8c: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ec8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ec90: 0xace60054  sw          $a2, 0x54($a3)
    ctx->pc = 0x13ec90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 6));
    // 0x13ec94: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ec94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ec98: 0xace50058  sw          $a1, 0x58($a3)
    ctx->pc = 0x13ec98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 88), GPR_U32(ctx, 5));
    // 0x13ec9c: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ec9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13eca0: 0xace3005c  sw          $v1, 0x5C($a3)
    ctx->pc = 0x13eca0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 92), GPR_U32(ctx, 3));
    // 0x13eca4: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13eca4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13eca8: 0xace60060  sw          $a2, 0x60($a3)
    ctx->pc = 0x13eca8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 6));
    // 0x13ecac: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ecacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ecb0: 0xace60064  sw          $a2, 0x64($a3)
    ctx->pc = 0x13ecb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 100), GPR_U32(ctx, 6));
    // 0x13ecb4: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ecb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ecb8: 0xace60068  sw          $a2, 0x68($a3)
    ctx->pc = 0x13ecb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 104), GPR_U32(ctx, 6));
    // 0x13ecbc: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ecbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ecc0: 0xace3006c  sw          $v1, 0x6C($a3)
    ctx->pc = 0x13ecc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 108), GPR_U32(ctx, 3));
    // 0x13ecc4: 0x8c870084  lw          $a3, 0x84($a0)
    ctx->pc = 0x13ecc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ecc8: 0xace50070  sw          $a1, 0x70($a3)
    ctx->pc = 0x13ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 112), GPR_U32(ctx, 5));
    // 0x13eccc: 0x8c850084  lw          $a1, 0x84($a0)
    ctx->pc = 0x13ecccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ecd0: 0xaca60074  sw          $a2, 0x74($a1)
    ctx->pc = 0x13ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 6));
    // 0x13ecd4: 0x8c850084  lw          $a1, 0x84($a0)
    ctx->pc = 0x13ecd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ecd8: 0xaca60078  sw          $a2, 0x78($a1)
    ctx->pc = 0x13ecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 6));
    // 0x13ecdc: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x13ecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x13ece0: 0x3e00008  jr          $ra
    ctx->pc = 0x13ECE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ECE0u;
        // 0x13ece4: 0xac83007c  sw          $v1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13ECE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13ECE8u;
}
