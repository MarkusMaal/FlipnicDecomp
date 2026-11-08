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

// Function: entry_00146c58
// Address: 0x146c58 - 0x146da8
void entry_00146c58_0x146c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146c58_0x146c58");
#endif

    switch (ctx->pc) {
        case 0x146c60u: goto label_146c60;
        default: break;
    }

    ctx->pc = 0x146c58u;

    // 0x146c58: 0xc040168  jal         func_1005A0
    ctx->pc = 0x146C58u;
    SET_GPR_U32(ctx, 31, 0x146C60u);
    ctx->pc = 0x146C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146C58u;
    // 0x146c5c: 0x34048000  ori         $a0, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x146C58u, 0x146C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146C60u;
label_146c60:
    // 0x146c60: 0x2b11821  addu        $v1, $s5, $s1
    ctx->pc = 0x146c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x146c64: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x146c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x146c68: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x146c68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x146c6c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x146c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x146c70: 0x8c650060  lw          $a1, 0x60($v1)
    ctx->pc = 0x146c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x146c74: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x146c74u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146c78: 0x34870404  ori         $a3, $a0, 0x404
    ctx->pc = 0x146c78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x146c7c: 0x348d0104  ori         $t5, $a0, 0x104
    ctx->pc = 0x146c7cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)260);
    // 0x146c80: 0x3c046c00  lui         $a0, 0x6C00
    ctx->pc = 0x146c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27648 << 16));
    // 0x146c84: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x146c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x146c88: 0x3c0a0024  lui         $t2, 0x24
    ctx->pc = 0x146c88u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)36 << 16));
    // 0x146c8c: 0x34848022  ori         $a0, $a0, 0x8022
    ctx->pc = 0x146c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32802);
    // 0x146c90: 0x1445825  or          $t3, $t2, $a0
    ctx->pc = 0x146c90u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x146c94: 0x27a9012c  addiu       $t1, $sp, 0x12C
    ctx->pc = 0x146c94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x146c98: 0x266f03cc  addiu       $t7, $s3, 0x3CC
    ctx->pc = 0x146c98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), 972));
    // 0x146c9c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x146c9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146ca0: 0xafa5012c  sw          $a1, 0x12C($sp)
    ctx->pc = 0x146ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 5));
    // 0x146ca4: 0x3c036c01  lui         $v1, 0x6C01
    ctx->pc = 0x146ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
    // 0x146ca8: 0x8fb8012c  lw          $t8, 0x12C($sp)
    ctx->pc = 0x146ca8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146cac: 0x346e801f  ori         $t6, $v1, 0x801F
    ctx->pc = 0x146cacu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32799);
    // 0x146cb0: 0x3c036c24  lui         $v1, 0x6C24
    ctx->pc = 0x146cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27684 << 16));
    // 0x146cb4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x146cb4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146cb8: 0x34658020  ori         $a1, $v1, 0x8020
    ctx->pc = 0x146cb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32800);
    // 0x146cbc: 0x34648023  ori         $a0, $v1, 0x8023
    ctx->pc = 0x146cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32803);
    // 0x146cc0: 0x34638022  ori         $v1, $v1, 0x8022
    ctx->pc = 0x146cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32802);
    // 0x146cc4: 0xa3080003  sb          $t0, 0x3($t8)
    ctx->pc = 0x146cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x146cc8: 0xa3000002  sb          $zero, 0x2($t8)
    ctx->pc = 0x146cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146ccc: 0xaf160004  sw          $s6, 0x4($t8)
    ctx->pc = 0x146cccu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 22));
    // 0x146cd0: 0xa71e0000  sh          $fp, 0x0($t8)
    ctx->pc = 0x146cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 30));
    // 0x146cd4: 0xaf070008  sw          $a3, 0x8($t8)
    ctx->pc = 0x146cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 7));
    // 0x146cd8: 0xaf0e000c  sw          $t6, 0xC($t8)
    ctx->pc = 0x146cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 14));
    // 0x146cdc: 0x8fb8012c  lw          $t8, 0x12C($sp)
    ctx->pc = 0x146cdcu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146ce0: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x146ce0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x146ce4: 0xafb8012c  sw          $t8, 0x12C($sp)
    ctx->pc = 0x146ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 24));
    // 0x146ce8: 0x8e7803cc  lw          $t8, 0x3CC($s3)
    ctx->pc = 0x146ce8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 972)));
    // 0x146cec: 0x8fb9012c  lw          $t9, 0x12C($sp)
    ctx->pc = 0x146cecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146cf0: 0xa3280003  sb          $t0, 0x3($t9)
    ctx->pc = 0x146cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x146cf4: 0xa3200002  sb          $zero, 0x2($t9)
    ctx->pc = 0x146cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146cf8: 0xaf380004  sw          $t8, 0x4($t9)
    ctx->pc = 0x146cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4), GPR_U32(ctx, 24));
    // 0x146cfc: 0xa7260000  sh          $a2, 0x0($t9)
    ctx->pc = 0x146cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x146d00: 0xaf2d0008  sw          $t5, 0x8($t9)
    ctx->pc = 0x146d00u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 8), GPR_U32(ctx, 13));
    // 0x146d04: 0xaf2b000c  sw          $t3, 0xC($t9)
    ctx->pc = 0x146d04u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 11));
    // 0x146d08: 0x8fab012c  lw          $t3, 0x12C($sp)
    ctx->pc = 0x146d08u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146d0c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x146d0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x146d10: 0xafab012c  sw          $t3, 0x12C($sp)
    ctx->pc = 0x146d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 11));
    // 0x146d14: 0x8e8b02b0  lw          $t3, 0x2B0($s4)
    ctx->pc = 0x146d14u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 688)));
    // 0x146d18: 0x8fb8012c  lw          $t8, 0x12C($sp)
    ctx->pc = 0x146d18u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146d1c: 0xa3080003  sb          $t0, 0x3($t8)
    ctx->pc = 0x146d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 24), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x146d20: 0xa3000002  sb          $zero, 0x2($t8)
    ctx->pc = 0x146d20u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146d24: 0xaf0b0004  sw          $t3, 0x4($t8)
    ctx->pc = 0x146d24u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 11));
    // 0x146d28: 0xa7060000  sh          $a2, 0x0($t8)
    ctx->pc = 0x146d28u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x146d2c: 0xaf0d0008  sw          $t5, 0x8($t8)
    ctx->pc = 0x146d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 13));
    // 0x146d30: 0xaf05000c  sw          $a1, 0xC($t8)
    ctx->pc = 0x146d30u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 5));
    // 0x146d34: 0x8fab012c  lw          $t3, 0x12C($sp)
    ctx->pc = 0x146d34u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146d38: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x146d38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x146d3c: 0xafab012c  sw          $t3, 0x12C($sp)
    ctx->pc = 0x146d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 11));
    // 0x146d40: 0x8e4b0000  lw          $t3, 0x0($s2)
    ctx->pc = 0x146d40u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146d44: 0x8fb8012c  lw          $t8, 0x12C($sp)
    ctx->pc = 0x146d44u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146d48: 0xa3080003  sb          $t0, 0x3($t8)
    ctx->pc = 0x146d48u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x146d4c: 0xa3000002  sb          $zero, 0x2($t8)
    ctx->pc = 0x146d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 24), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146d50: 0xaf0b0004  sw          $t3, 0x4($t8)
    ctx->pc = 0x146d50u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 11));
    // 0x146d54: 0xa7060000  sh          $a2, 0x0($t8)
    ctx->pc = 0x146d54u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x146d58: 0xaf0d0008  sw          $t5, 0x8($t8)
    ctx->pc = 0x146d58u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 13));
    // 0x146d5c: 0xaf04000c  sw          $a0, 0xC($t8)
    ctx->pc = 0x146d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 4));
    // 0x146d60: 0x8fab012c  lw          $t3, 0x12C($sp)
    ctx->pc = 0x146d60u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146d64: 0x8f9884d0  lw          $t8, -0x7B30($gp)
    ctx->pc = 0x146d64u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935760)));
    // 0x146d68: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x146d68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x146d6c: 0xafab012c  sw          $t3, 0x12C($sp)
    ctx->pc = 0x146d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 11));
    // 0x146d70: 0x3c0b1400  lui         $t3, 0x1400
    ctx->pc = 0x146d70u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)5120 << 16));
    // 0x146d74: 0x8fb9012c  lw          $t9, 0x12C($sp)
    ctx->pc = 0x146d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146d78: 0x30bc025  or          $t8, $t8, $t3
    ctx->pc = 0x146d78u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 11));
    // 0x146d7c: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x146d7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x146d80: 0xa32b0003  sb          $t3, 0x3($t9)
    ctx->pc = 0x146d80u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 3), (uint8_t)GPR_U32(ctx, 11));
    // 0x146d84: 0xa3200002  sb          $zero, 0x2($t9)
    ctx->pc = 0x146d84u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x146d88: 0xaf200004  sw          $zero, 0x4($t9)
    ctx->pc = 0x146d88u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4), GPR_U32(ctx, 0));
    // 0x146d8c: 0xa7200000  sh          $zero, 0x0($t9)
    ctx->pc = 0x146d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x146d90: 0xaf200008  sw          $zero, 0x8($t9)
    ctx->pc = 0x146d90u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 8), GPR_U32(ctx, 0));
    // 0x146d94: 0xaf38000c  sw          $t8, 0xC($t9)
    ctx->pc = 0x146d94u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 24));
    // 0x146d98: 0x8fab012c  lw          $t3, 0x12C($sp)
    ctx->pc = 0x146d98u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x146d9c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x146d9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x146da0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x146DA0u;
    {
        const bool branch_taken_0x146da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146DA0u;
        // 0x146da4: 0xafab012c  sw          $t3, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146da0) {
            ctx->pc = 0x146EA8u;
            return;
        }
    }
    ctx->pc = 0x146DA8u;
}
