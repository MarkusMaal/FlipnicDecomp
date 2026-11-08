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

// Function: FUN_0011fa20
// Address: 0x11fa20 - 0x11fb10
void FUN_0011fa20_0x11fa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011fa20_0x11fa20");
#endif

    switch (ctx->pc) {
        case 0x11fa90u: goto label_11fa90;
        default: break;
    }

    ctx->pc = 0x11fa20u;

    // 0x11fa20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11fa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11fa24: 0x30c33fff  andi        $v1, $a2, 0x3FFF
    ctx->pc = 0x11fa24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x11fa28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11fa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11fa2c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x11fa2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11fa30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11fa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11fa34: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x11fa34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x11fa38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11fa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11fa3c: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x11fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x11fa40: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x11fa40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11fa44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11fa44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11fa48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa4c: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x11fa4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x11fa50: 0xa1280003  sb          $t0, 0x3($t1)
    ctx->pc = 0x11fa50u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x11fa54: 0xa1200002  sb          $zero, 0x2($t1)
    ctx->pc = 0x11fa54u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x11fa58: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x11fa58u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x11fa5c: 0xa5200000  sh          $zero, 0x0($t1)
    ctx->pc = 0x11fa5cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x11fa60: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x11fa60u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x11fa64: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x11fa64u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
    // 0x11fa68: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x11fa68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11fa6c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x11fa6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x11fa70: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x11fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x11fa74: 0x94870034  lhu         $a3, 0x34($a0)
    ctx->pc = 0x11fa74u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x11fa78: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x11fa78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x11fa7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11fa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11fa80: 0xa4820034  sh          $v0, 0x34($a0)
    ctx->pc = 0x11fa80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x11fa84: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x11fa84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11fa88: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x11FA88u;
    SET_GPR_U32(ctx, 31, 0x11FA90u);
    ctx->pc = 0x11FA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FA88u;
    // 0x11fa8c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x11FA88u, 0x11FA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FA90u;
label_11fa90:
    // 0x11fa90: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x11fa90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11fa94: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x11fa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x11fa98: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x11fa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11fa9c: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x11fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x11faa0: 0x24c60060  addiu       $a2, $a2, 0x60
    ctx->pc = 0x11faa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x11faa4: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x11faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x11faa8: 0x8e260080  lw          $a2, 0x80($s1)
    ctx->pc = 0x11faa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x11faac: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x11faacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11fab0: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x11fab0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x11fab4: 0xa0e50003  sb          $a1, 0x3($a3)
    ctx->pc = 0x11fab4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x11fab8: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x11fab8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x11fabc: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x11fabcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x11fac0: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x11fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x11fac4: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x11fac4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x11fac8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x11fac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11facc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x11faccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x11fad0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x11fad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x11fad4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x11fad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11fad8: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x11fad8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x11fadc: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x11fadcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x11fae0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x11fae0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x11fae4: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x11fae4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x11fae8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x11fae8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x11faec: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x11faecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x11faf0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11faf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11faf4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x11faf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x11faf8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x11faf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x11fafc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11fafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11fb00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11fb00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11fb04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11fb04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fb08: 0x3e00008  jr          $ra
    ctx->pc = 0x11FB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB08u;
        // 0x11fb0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FB10u;
}
