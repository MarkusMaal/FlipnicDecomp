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

// Function: FUN_001afa30
// Address: 0x1afa30 - 0x1afb30
void FUN_001afa30_0x1afa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001afa30_0x1afa30");
#endif

    ctx->pc = 0x1afa30u;

    // 0x1afa30: 0x24e58000  addiu       $a1, $a3, -0x8000
    ctx->pc = 0x1afa30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294934528));
    // 0x1afa34: 0x8c8d0000  lw          $t5, 0x0($a0)
    ctx->pc = 0x1afa34u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1afa38: 0x56240  sll         $t4, $a1, 9
    ctx->pc = 0x1afa38u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 9));
    // 0x1afa3c: 0xc87821  addu        $t7, $a2, $t0
    ctx->pc = 0x1afa3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1afa40: 0x92a40  sll         $a1, $t1, 9
    ctx->pc = 0x1afa40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 9));
    // 0x1afa44: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x1afa44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x1afa48: 0x3c096400  lui         $t1, 0x6400
    ctx->pc = 0x1afa48u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)25600 << 16));
    // 0x1afa4c: 0x34682493  ori         $t0, $v1, 0x2493
    ctx->pc = 0x1afa4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x1afa50: 0x9703c  dsll32      $t6, $t1, 0
    ctx->pc = 0x1afa50u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1afa54: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1afa54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afa58: 0x34098001  ori         $t1, $zero, 0x8001
    ctx->pc = 0x1afa58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1afa5c: 0xc3fc2  srl         $a3, $t4, 31
    ctx->pc = 0x1afa5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x1afa60: 0x12ec025  or          $t8, $t1, $t6
    ctx->pc = 0x1afa60u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 9) | GPR_U64(ctx, 14));
    // 0x1afa64: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x1afa64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1afa68: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1afa68u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x1afa6c: 0xffb80000  sd          $t8, 0x0($sp)
    ctx->pc = 0x1afa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 24));
    // 0x1afa70: 0x35393530  ori         $t9, $t1, 0x3530
    ctx->pc = 0x1afa70u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)13616);
    // 0x1afa74: 0x10c0018  mult        $zero, $t0, $t4
    ctx->pc = 0x1afa74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1afa78: 0xffb90008  sd          $t9, 0x8($sp)
    ctx->pc = 0x1afa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 25));
    // 0x1afa7c: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x1afa7cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x1afa80: 0x352e0004  ori         $t6, $t1, 0x4
    ctx->pc = 0x1afa80u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4);
    // 0x1afa84: 0xfdae0000  sd          $t6, 0x0($t5)
    ctx->pc = 0x1afa84u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 14));
    // 0x1afa88: 0x3c095000  lui         $t1, 0x5000
    ctx->pc = 0x1afa88u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)20480 << 16));
    // 0x1afa8c: 0xc810  mfhi        $t9
    ctx->pc = 0x1afa8cu;
    SET_GPR_U64(ctx, 25, ctx->hi);
    // 0x1afa90: 0x35380004  ori         $t8, $t1, 0x4
    ctx->pc = 0x1afa90u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4);
    // 0x1afa94: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x1afa94u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x1afa98: 0x24090156  addiu       $t1, $zero, 0x156
    ctx->pc = 0x1afa98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x1afa9c: 0xadb8000c  sw          $t8, 0xC($t5)
    ctx->pc = 0x1afa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 24));
    // 0x1afaa0: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x1afaa0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1afaa4: 0x1050018  mult        $zero, $t0, $a1
    ctx->pc = 0x1afaa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1afaa8: 0x32c6021  addu        $t4, $t9, $t4
    ctx->pc = 0x1afaa8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
    // 0x1afaac: 0xc4203  sra         $t0, $t4, 8
    ctx->pc = 0x1afaacu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 12), 8));
    // 0x1afab0: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1afab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1afab4: 0x7ba80000  lq          $t0, 0x0($sp)
    ctx->pc = 0x1afab4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afab8: 0x6010  mfhi        $t4
    ctx->pc = 0x1afab8u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x1afabc: 0x24e77fff  addiu       $a3, $a3, 0x7FFF
    ctx->pc = 0x1afabcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32767));
    // 0x1afac0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1afac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1afac4: 0x1852821  addu        $a1, $t4, $a1
    ctx->pc = 0x1afac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1afac8: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x1afac8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x1afacc: 0x7da80010  sq          $t0, 0x10($t5)
    ctx->pc = 0x1afaccu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 16), GPR_VEC(ctx, 8));
    // 0x1afad0: 0xfda90020  sd          $t1, 0x20($t5)
    ctx->pc = 0x1afad0u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 32), GPR_U64(ctx, 9));
    // 0x1afad4: 0xa5aa0028  sh          $t2, 0x28($t5)
    ctx->pc = 0x1afad4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 40), (uint16_t)GPR_U32(ctx, 10));
    // 0x1afad8: 0xa34821  addu        $t1, $a1, $v1
    ctx->pc = 0x1afad8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1afadc: 0xa5ab002a  sh          $t3, 0x2A($t5)
    ctx->pc = 0x1afadcu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 42), (uint16_t)GPR_U32(ctx, 11));
    // 0x1afae0: 0xe91821  addu        $v1, $a3, $t1
    ctx->pc = 0x1afae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1afae4: 0xada0002c  sw          $zero, 0x2C($t5)
    ctx->pc = 0x1afae4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 44), GPR_U32(ctx, 0));
    // 0x1afae8: 0xa5a60030  sh          $a2, 0x30($t5)
    ctx->pc = 0x1afae8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 48), (uint16_t)GPR_U32(ctx, 6));
    // 0x1afaec: 0xa5a70032  sh          $a3, 0x32($t5)
    ctx->pc = 0x1afaecu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 50), (uint16_t)GPR_U32(ctx, 7));
    // 0x1afaf0: 0xadae0034  sw          $t6, 0x34($t5)
    ctx->pc = 0x1afaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 14));
    // 0x1afaf4: 0x87a50010  lh          $a1, 0x10($sp)
    ctx->pc = 0x1afaf4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afaf8: 0xa5a50038  sh          $a1, 0x38($t5)
    ctx->pc = 0x1afaf8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 56), (uint16_t)GPR_U32(ctx, 5));
    // 0x1afafc: 0x87a50018  lh          $a1, 0x18($sp)
    ctx->pc = 0x1afafcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1afb00: 0xa5a5003a  sh          $a1, 0x3A($t5)
    ctx->pc = 0x1afb00u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 58), (uint16_t)GPR_U32(ctx, 5));
    // 0x1afb04: 0xada0003c  sw          $zero, 0x3C($t5)
    ctx->pc = 0x1afb04u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 60), GPR_U32(ctx, 0));
    // 0x1afb08: 0x9fa50020  lwu         $a1, 0x20($sp)
    ctx->pc = 0x1afb08u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afb0c: 0xfda50040  sd          $a1, 0x40($t5)
    ctx->pc = 0x1afb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 64), GPR_U64(ctx, 5));
    // 0x1afb10: 0xa5af0048  sh          $t7, 0x48($t5)
    ctx->pc = 0x1afb10u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 72), (uint16_t)GPR_U32(ctx, 15));
    // 0x1afb14: 0xa5a3004a  sh          $v1, 0x4A($t5)
    ctx->pc = 0x1afb14u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 74), (uint16_t)GPR_U32(ctx, 3));
    // 0x1afb18: 0xadae004c  sw          $t6, 0x4C($t5)
    ctx->pc = 0x1afb18u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 76), GPR_U32(ctx, 14));
    // 0x1afb1c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1afb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1afb20: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x1afb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1afb24: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1afb24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1afb28: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB28u;
        // 0x1afb2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFB30u;
}
