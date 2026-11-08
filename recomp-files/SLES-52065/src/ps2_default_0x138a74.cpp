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

// Function: default
// Address: 0x138a74 - 0x138b40
void ps2_default_0x138a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x138a74");
#endif

    ctx->pc = 0x138a74u;

    // 0x138a74: 0x8f8784ec  lw          $a3, -0x7B14($gp)
    ctx->pc = 0x138a74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935788)));
    // 0x138a78: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x138a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x138a7c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x138a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x138a80: 0x24058000  addiu       $a1, $zero, -0x8000
    ctx->pc = 0x138a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x138a84: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x138a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x138a88: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x138a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x138a8c: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x138a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x138a90: 0x30067fff  andi        $a2, $zero, 0x7FFF
    ctx->pc = 0x138a90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)32767);
    // 0x138a94: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x138a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x138a98: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x138a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x138a9c: 0xac870020  sw          $a3, 0x20($a0)
    ctx->pc = 0x138a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x138aa0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x138aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x138aa4: 0xde880010  ld          $t0, 0x10($s4)
    ctx->pc = 0x138aa4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x138aa8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x138aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x138aac: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x138aacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x138ab0: 0x64040080  daddiu      $a0, $zero, 0x80
    ctx->pc = 0x138ab0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x138ab4: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x138ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x138ab8: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x138ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x138abc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x138abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138ac0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x138ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x138ac4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x138ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x138ac8: 0xfe880030  sd          $t0, 0x30($s4)
    ctx->pc = 0x138ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 8));
    // 0x138acc: 0xde820018  ld          $v0, 0x18($s4)
    ctx->pc = 0x138accu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x138ad0: 0xfe820038  sd          $v0, 0x38($s4)
    ctx->pc = 0x138ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 56), GPR_U64(ctx, 2));
    // 0x138ad4: 0xde880030  ld          $t0, 0x30($s4)
    ctx->pc = 0x138ad4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x138ad8: 0x1071024  and         $v0, $t0, $a3
    ctx->pc = 0x138ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x138adc: 0x839b8  dsll        $a3, $t0, 6
    ctx->pc = 0x138adcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << 6);
    // 0x138ae0: 0x73d7e  dsrl32      $a3, $a3, 21
    ctx->pc = 0x138ae0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 21));
    // 0x138ae4: 0x30e707fc  andi        $a3, $a3, 0x7FC
    ctx->pc = 0x138ae4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2044);
    // 0x138ae8: 0x34e70005  ori         $a3, $a3, 0x5
    ctx->pc = 0x138ae8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)5);
    // 0x138aec: 0x30e707ff  andi        $a3, $a3, 0x7FF
    ctx->pc = 0x138aecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x138af0: 0x73bfc  dsll32      $a3, $a3, 15
    ctx->pc = 0x138af0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 15));
    // 0x138af4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x138af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x138af8: 0xfe820030  sd          $v0, 0x30($s4)
    ctx->pc = 0x138af8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 2));
    // 0x138afc: 0x96820030  lhu         $v0, 0x30($s4)
    ctx->pc = 0x138afcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x138b00: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x138b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x138b04: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x138b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x138b08: 0xa6820030  sh          $v0, 0x30($s4)
    ctx->pc = 0x138b08u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x138b0c: 0x92820031  lbu         $v0, 0x31($s4)
    ctx->pc = 0x138b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 49)));
    // 0x138b10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x138b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x138b14: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x138b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x138b18: 0xa2820031  sb          $v0, 0x31($s4)
    ctx->pc = 0x138b18u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x138b1c: 0x8e840090  lw          $a0, 0x90($s4)
    ctx->pc = 0x138b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x138b20: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x138b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x138b24: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x138b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x138b28: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x138B28u;
    {
        const bool branch_taken_0x138b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B28u;
        // 0x138b2c: 0x30430004  andi        $v1, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b28) {
            ctx->pc = 0x138B40u;
            return;
        }
    }
    ctx->pc = 0x138B30u;
    // 0x138b30: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x138b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138b34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x138b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x138b38: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x138b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x138b3c: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x138b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    ctx->pc = 0x138b40u;
}
