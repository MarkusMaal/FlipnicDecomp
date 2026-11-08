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

// Function: FUN_001884a0
// Address: 0x1884a0 - 0x1885e4
void FUN_001884a0_0x1884a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001884a0_0x1884a0");
#endif

    ctx->pc = 0x1884a0u;

    // 0x1884a0: 0x24e58000  addiu       $a1, $a3, -0x8000
    ctx->pc = 0x1884a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294934528));
    // 0x1884a4: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x1884a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x1884a8: 0x5c240  sll         $t8, $a1, 9
    ctx->pc = 0x1884a8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 5), 9));
    // 0x1884ac: 0x346e2493  ori         $t6, $v1, 0x2493
    ctx->pc = 0x1884acu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x1884b0: 0xc86021  addu        $t4, $a2, $t0
    ctx->pc = 0x1884b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1884b4: 0x92a40  sll         $a1, $t1, 9
    ctx->pc = 0x1884b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 9));
    // 0x1884b8: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x1884b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x1884bc: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1884bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x1884c0: 0x3483c  dsll32      $t1, $v1, 0
    ctx->pc = 0x1884c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1884c4: 0x34088001  ori         $t0, $zero, 0x8001
    ctx->pc = 0x1884c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1884c8: 0x1d80018  mult        $zero, $t6, $t8
    ctx->pc = 0x1884c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1884cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1884ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1884d0: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1884d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1884d4: 0x34e73530  ori         $a3, $a3, 0x3530
    ctx->pc = 0x1884d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)13616);
    // 0x1884d8: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x1884d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x1884dc: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x1884dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1884e0: 0xffa70008  sd          $a3, 0x8($sp)
    ctx->pc = 0x1884e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 7));
    // 0x1884e4: 0x186fc2  srl         $t5, $t8, 31
    ctx->pc = 0x1884e4u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 24), 31));
    // 0x1884e8: 0x4010  mfhi        $t0
    ctx->pc = 0x1884e8u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x1884ec: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x1884ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1884f0: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1884f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x1884f4: 0x34ef0004  ori         $t7, $a3, 0x4
    ctx->pc = 0x1884f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4);
    // 0x1884f8: 0x1c50018  mult        $zero, $t6, $a1
    ctx->pc = 0x1884f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1884fc: 0x1184021  addu        $t0, $t0, $t8
    ctx->pc = 0x1884fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 24)));
    // 0x188500: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x188500u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
    // 0x188504: 0x84203  sra         $t0, $t0, 8
    ctx->pc = 0x188504u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 8));
    // 0x188508: 0x10d4021  addu        $t0, $t0, $t5
    ctx->pc = 0x188508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x18850c: 0xfd2f0000  sd          $t7, 0x0($t1)
    ctx->pc = 0x18850cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 15));
    // 0x188510: 0x240d0156  addiu       $t5, $zero, 0x156
    ctx->pc = 0x188510u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x188514: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x188514u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188518: 0x4810  mfhi        $t1
    ctx->pc = 0x188518u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x18851c: 0x34ee0004  ori         $t6, $a3, 0x4
    ctx->pc = 0x18851cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4);
    // 0x188520: 0x25077fff  addiu       $a3, $t0, 0x7FFF
    ctx->pc = 0x188520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 32767));
    // 0x188524: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x188524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x188528: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x188528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18852c: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x18852cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x188530: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x188530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188534: 0xa34821  addu        $t1, $a1, $v1
    ctx->pc = 0x188534u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x188538: 0xade00008  sw          $zero, 0x8($t7)
    ctx->pc = 0x188538u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 0));
    // 0x18853c: 0xe92821  addu        $a1, $a3, $t1
    ctx->pc = 0x18853cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x188540: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x188540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188544: 0xac6e000c  sw          $t6, 0xC($v1)
    ctx->pc = 0x188544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 14));
    // 0x188548: 0x7ba90000  lq          $t1, 0x0($sp)
    ctx->pc = 0x188548u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18854c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18854cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188550: 0x7c690010  sq          $t1, 0x10($v1)
    ctx->pc = 0x188550u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 9));
    // 0x188554: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x188554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188558: 0xfc6d0020  sd          $t5, 0x20($v1)
    ctx->pc = 0x188558u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 13));
    // 0x18855c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18855cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188560: 0xa46a0028  sh          $t2, 0x28($v1)
    ctx->pc = 0x188560u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 40), (uint16_t)GPR_U32(ctx, 10));
    // 0x188564: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x188564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188568: 0xa46b002a  sh          $t3, 0x2A($v1)
    ctx->pc = 0x188568u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 11));
    // 0x18856c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18856cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188570: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x188570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x188574: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x188574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188578: 0xa4660030  sh          $a2, 0x30($v1)
    ctx->pc = 0x188578u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 6));
    // 0x18857c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18857cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188580: 0xa4670032  sh          $a3, 0x32($v1)
    ctx->pc = 0x188580u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 50), (uint16_t)GPR_U32(ctx, 7));
    // 0x188584: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x188584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188588: 0xac680034  sw          $t0, 0x34($v1)
    ctx->pc = 0x188588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 8));
    // 0x18858c: 0x87a60010  lh          $a2, 0x10($sp)
    ctx->pc = 0x18858cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188590: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x188590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188594: 0xa4660038  sh          $a2, 0x38($v1)
    ctx->pc = 0x188594u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 56), (uint16_t)GPR_U32(ctx, 6));
    // 0x188598: 0x87a60018  lh          $a2, 0x18($sp)
    ctx->pc = 0x188598u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18859c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18859cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1885a0: 0xa466003a  sh          $a2, 0x3A($v1)
    ctx->pc = 0x1885a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 58), (uint16_t)GPR_U32(ctx, 6));
    // 0x1885a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1885a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1885a8: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x1885a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x1885ac: 0x9fa60020  lwu         $a2, 0x20($sp)
    ctx->pc = 0x1885acu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1885b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1885b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1885b4: 0xfc660040  sd          $a2, 0x40($v1)
    ctx->pc = 0x1885b4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 6));
    // 0x1885b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1885b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1885bc: 0xa46c0048  sh          $t4, 0x48($v1)
    ctx->pc = 0x1885bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 72), (uint16_t)GPR_U32(ctx, 12));
    // 0x1885c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1885c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1885c4: 0xa465004a  sh          $a1, 0x4A($v1)
    ctx->pc = 0x1885c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 74), (uint16_t)GPR_U32(ctx, 5));
    // 0x1885c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1885c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1885cc: 0xac68004c  sw          $t0, 0x4C($v1)
    ctx->pc = 0x1885ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 8));
    // 0x1885d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1885d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1885d4: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x1885d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1885d8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1885d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1885dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1885DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1885E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885DCu;
        // 0x1885e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1885DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1885E4u;
}
