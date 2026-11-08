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

// Function: entry_001b1b40
// Address: 0x1b1b40 - 0x1b1bf0
void entry_001b1b40_0x1b1b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1b40_0x1b1b40");
#endif

    switch (ctx->pc) {
        case 0x1b1b64u: goto label_1b1b64;
        default: break;
    }

    ctx->pc = 0x1b1b40u;

    // 0x1b1b40: 0x8fa800e0  lw          $t0, 0xE0($sp)
    ctx->pc = 0x1b1b40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b1b44: 0x26e2ff80  addiu       $v0, $s7, -0x80
    ctx->pc = 0x1b1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967168));
    // 0x1b1b48: 0x8fa900d0  lw          $t1, 0xD0($sp)
    ctx->pc = 0x1b1b48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b1b4c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b1b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b50: 0x433823  subu        $a3, $v0, $v1
    ctx->pc = 0x1b1b50u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1b54: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b1b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b1b58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b5c: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B1B5Cu;
    SET_GPR_U32(ctx, 31, 0x1B1B64u);
    ctx->pc = 0x1B1B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1B5Cu;
    // 0x1b1b60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B1B5Cu, 0x1B1B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B64u;
label_1b1b64:
    // 0x1b1b64: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1b1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1b1b68: 0x8c4228dc  lw          $v0, 0x28DC($v0)
    ctx->pc = 0x1b1b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10460)));
    // 0x1b1b6c: 0xafa202a0  sw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b1b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 2));
    // 0x1b1b70: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x1b1b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b1b74: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b1b74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b1b78: 0x14200067  bnez        $at, . + 4 + (0x67 << 2)
    ctx->pc = 0x1B1B78u;
    {
        const bool branch_taken_0x1b1b78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1b78) {
            ctx->pc = 0x1B1D18u;
            return;
        }
    }
    ctx->pc = 0x1B1B80u;
    // 0x1b1b80: 0x8ede0008  lw          $fp, 0x8($s6)
    ctx->pc = 0x1b1b80u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1b1b84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b1b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1b88: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1b1b88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b1b8c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b1b90: 0xafa202c0  sw          $v0, 0x2C0($sp)
    ctx->pc = 0x1b1b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 2));
    // 0x1b1b94: 0x93c40063  lbu         $a0, 0x63($fp)
    ctx->pc = 0x1b1b94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 99)));
    // 0x1b1b98: 0xdfc20060  ld          $v0, 0x60($fp)
    ctx->pc = 0x1b1b98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x1b1b9c: 0x426bc  dsll32      $a0, $a0, 26
    ctx->pc = 0x1b1b9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 26));
    // 0x1b1ba0: 0x4273e  dsrl32      $a0, $a0, 28
    ctx->pc = 0x1b1ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 28));
    // 0x1b1ba4: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1b1ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1b1ba8: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1b1ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b1bac: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1b1bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1b1bb0: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1b1bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b1bb4: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1b1bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b1bb8: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x1b1bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x1b1bbc: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1b1bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b1bc0: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B1BC0u;
    {
        const bool branch_taken_0x1b1bc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BC0u;
        // 0x1b1bc4: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1bc0) {
            ctx->pc = 0x1B1C18u;
            return;
        }
    }
    ctx->pc = 0x1B1BC8u;
    // 0x1b1bc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b1bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1bcc: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b1bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b1bd0: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b1bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b1bd4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1bd8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1bd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b1bdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1BDCu;
    {
        const bool branch_taken_0x1b1bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1bdc) {
            ctx->pc = 0x1B1BF0u;
            return;
        }
    }
    ctx->pc = 0x1B1BE4u;
    // 0x1b1be4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b1be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b1be8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1bec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b1bf0u;
}
