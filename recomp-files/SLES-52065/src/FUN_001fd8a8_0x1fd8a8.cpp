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

// Function: FUN_001fd8a8
// Address: 0x1fd8a8 - 0x1fdbc4
void FUN_001fd8a8_0x1fd8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fd8a8_0x1fd8a8");
#endif

    switch (ctx->pc) {
        case 0x1fd8ccu: goto label_1fd8cc;
        case 0x1fd960u: goto label_1fd960;
        case 0x1fdb68u: goto label_1fdb68;
        default: break;
    }

    ctx->pc = 0x1fd8a8u;

    // 0x1fd8a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fd8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fd8ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1fd8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1fd8b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd8b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fd8b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd8b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fd8b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd8bc: 0x120000bc  beqz        $s0, . + 4 + (0xBC << 2)
    ctx->pc = 0x1FD8BCu;
    {
        const bool branch_taken_0x1fd8bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8BCu;
        // 0x1fd8c0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd8bc) {
            ctx->pc = 0x1FDBB0u;
            goto label_1fdbb0;
        }
    }
    ctx->pc = 0x1FD8C4u;
    // 0x1fd8c4: 0xc07fe9c  jal         func_1FFA70
    ctx->pc = 0x1FD8C4u;
    SET_GPR_U32(ctx, 31, 0x1FD8CCu);
    ctx->pc = 0x1FFA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA70u, 0x1FD8C4u, 0x1FD8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD8CCu;
label_1fd8cc:
    // 0x1fd8cc: 0x260afff8  addiu       $t2, $s0, -0x8
    ctx->pc = 0x1fd8ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x1fd8d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fd8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fd8d4: 0x8d470004  lw          $a3, 0x4($t2)
    ctx->pc = 0x1fd8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1fd8d8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1fd8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x1fd8dc: 0x3c0d0022  lui         $t5, 0x22
    ctx->pc = 0x1fd8dcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)34 << 16));
    // 0x1fd8e0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1fd8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1fd8e4: 0xe24824  and         $t1, $a3, $v0
    ctx->pc = 0x1fd8e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1fd8e8: 0x25acd9c8  addiu       $t4, $t5, -0x2638
    ctx->pc = 0x1fd8e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 4294957512));
    // 0x1fd8ec: 0x1493021  addu        $a2, $t2, $t1
    ctx->pc = 0x1fd8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1fd8f0: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x1fd8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x1fd8f4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1fd8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1fd8f8: 0x8d840008  lw          $a0, 0x8($t4)
    ctx->pc = 0x1fd8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x1fd8fc: 0x14c4001e  bne         $a2, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FD8FCu;
    {
        const bool branch_taken_0x1fd8fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FD900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8FCu;
        // 0x1fd900: 0x435824  and         $t3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd8fc) {
            ctx->pc = 0x1FD978u;
            goto label_1fd978;
        }
    }
    ctx->pc = 0x1FD904u;
    // 0x1fd904: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x1fd904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1fd908: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD908u;
    {
        const bool branch_taken_0x1fd908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD908u;
        // 0x1fd90c: 0x12b4821  addu        $t1, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd908) {
            ctx->pc = 0x1FD92Cu;
            goto label_1fd92c;
        }
    }
    ctx->pc = 0x1FD910u;
    // 0x1fd910: 0x8e05fff8  lw          $a1, -0x8($s0)
    ctx->pc = 0x1fd910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x1fd914: 0x1455023  subu        $t2, $t2, $a1
    ctx->pc = 0x1fd914u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x1fd918: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x1fd918u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1fd91c: 0x8d48000c  lw          $t0, 0xC($t2)
    ctx->pc = 0x1fd91cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x1fd920: 0x8d470008  lw          $a3, 0x8($t2)
    ctx->pc = 0x1fd920u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1fd924: 0xace8000c  sw          $t0, 0xC($a3)
    ctx->pc = 0x1fd924u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
    // 0x1fd928: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x1fd928u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
label_1fd92c:
    // 0x1fd92c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fd92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fd930: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x1fd930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1fd934: 0xdc64ddd0  ld          $a0, -0x2230($v1)
    ctx->pc = 0x1fd934u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294958544)));
    // 0x1fd938: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1fd938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1fd93c: 0x35230001  ori         $v1, $t1, 0x1
    ctx->pc = 0x1fd93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x1fd940: 0xad8a0008  sw          $t2, 0x8($t4)
    ctx->pc = 0x1fd940u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 10));
    // 0x1fd944: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1fd944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1fd948: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD948u;
    {
        const bool branch_taken_0x1fd948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD948u;
        // 0x1fd94c: 0xad430004  sw          $v1, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd948) {
            ctx->pc = 0x1FD960u;
            goto label_1fd960;
        }
    }
    ctx->pc = 0x1FD950u;
    // 0x1fd950: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fd950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fd954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd958: 0xc07f6f2  jal         func_1FDBC8
    ctx->pc = 0x1FD958u;
    SET_GPR_U32(ctx, 31, 0x1FD960u);
    ctx->pc = 0x1FD95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD958u;
    // 0x1fd95c: 0x8c45ddd8  lw          $a1, -0x2228($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDBC8u, 0x1FD958u, 0x1FD960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD960u;
label_1fd960:
    // 0x1fd960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd964: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fd964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd968: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1fd968u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd96c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd96cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd970: 0x807fe9e  j           func_1FFA78
    ctx->pc = 0x1FD970u;
    ctx->pc = 0x1FD974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD970u;
    // 0x1fd974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA78u;
    NullVoid_0x1ffa78(rdram, ctx, runtime); return;
    ctx->pc = 0x1FD978u;
label_1fd978:
    // 0x1fd978: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x1fd978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1fd97c: 0xaccb0004  sw          $t3, 0x4($a2)
    ctx->pc = 0x1fd97cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 11));
    // 0x1fd980: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FD980u;
    {
        const bool branch_taken_0x1fd980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD980u;
        // 0x1fd984: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd980) {
            ctx->pc = 0x1FD9B8u;
            goto label_1fd9b8;
        }
    }
    ctx->pc = 0x1FD988u;
    // 0x1fd988: 0x8e05fff8  lw          $a1, -0x8($s0)
    ctx->pc = 0x1fd988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x1fd98c: 0x25820008  addiu       $v0, $t4, 0x8
    ctx->pc = 0x1fd98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x1fd990: 0x1455023  subu        $t2, $t2, $a1
    ctx->pc = 0x1fd990u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x1fd994: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x1fd994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1fd998: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD998u;
    {
        const bool branch_taken_0x1fd998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FD99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD998u;
        // 0x1fd99c: 0x1254821  addu        $t1, $t1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd998) {
            ctx->pc = 0x1FD9A8u;
            goto label_1fd9a8;
        }
    }
    ctx->pc = 0x1FD9A0u;
    // 0x1fd9a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD9A0u;
    {
        const bool branch_taken_0x1fd9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9A0u;
        // 0x1fd9a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd9a0) {
            ctx->pc = 0x1FD9B8u;
            goto label_1fd9b8;
        }
    }
    ctx->pc = 0x1FD9A8u;
label_1fd9a8:
    // 0x1fd9a8: 0x8d48000c  lw          $t0, 0xC($t2)
    ctx->pc = 0x1fd9a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x1fd9ac: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1fd9acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd9b0: 0xace8000c  sw          $t0, 0xC($a3)
    ctx->pc = 0x1fd9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
    // 0x1fd9b4: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x1fd9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
label_1fd9b8:
    // 0x1fd9b8: 0xcb1821  addu        $v1, $a2, $t3
    ctx->pc = 0x1fd9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1fd9bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1fd9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fd9c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fd9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fd9c4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FD9C4u;
    {
        const bool branch_taken_0x1fd9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9C4u;
        // 0x1fd9c8: 0x35220001  ori         $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd9c4) {
            ctx->pc = 0x1FDA18u;
            goto label_1fda18;
        }
    }
    ctx->pc = 0x1FD9CCu;
    // 0x1fd9cc: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FD9CCu;
    {
        const bool branch_taken_0x1fd9cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9CCu;
        // 0x1fd9d0: 0x12b4821  addu        $t1, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd9cc) {
            ctx->pc = 0x1FDA00u;
            goto label_1fda00;
        }
    }
    ctx->pc = 0x1FD9D4u;
    // 0x1fd9d4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fd9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fd9d8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1fd9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1fd9dc: 0x2442d9d0  addiu       $v0, $v0, -0x2630
    ctx->pc = 0x1fd9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957520));
    // 0x1fd9e0: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FD9E0u;
    {
        const bool branch_taken_0x1fd9e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fd9e0) {
            ctx->pc = 0x1FD9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD9E0u;
            // 0x1fd9e4: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDA08u;
            goto label_1fda08;
        }
    }
    ctx->pc = 0x1FD9E8u;
    // 0x1fd9e8: 0xac6a000c  sw          $t2, 0xC($v1)
    ctx->pc = 0x1fd9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 10));
    // 0x1fd9ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fd9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd9f0: 0xac6a0008  sw          $t2, 0x8($v1)
    ctx->pc = 0x1fd9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 10));
    // 0x1fd9f4: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x1fd9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
    // 0x1fd9f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD9F8u;
    {
        const bool branch_taken_0x1fd9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9F8u;
        // 0x1fd9fc: 0xad43000c  sw          $v1, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd9f8) {
            ctx->pc = 0x1FDA14u;
            goto label_1fda14;
        }
    }
    ctx->pc = 0x1FDA00u;
label_1fda00:
    // 0x1fda00: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1fda00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1fda04: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x1fda04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1fda08:
    // 0x1fda08: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1fda08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fda0c: 0xace8000c  sw          $t0, 0xC($a3)
    ctx->pc = 0x1fda0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
    // 0x1fda10: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x1fda10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
label_1fda14:
    // 0x1fda14: 0x35220001  ori         $v0, $t1, 0x1
    ctx->pc = 0x1fda14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
label_1fda18:
    // 0x1fda18: 0x1491821  addu        $v1, $t2, $t1
    ctx->pc = 0x1fda18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1fda1c: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x1fda1cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x1fda20: 0x1480005d  bnez        $a0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1FDA20u;
    {
        const bool branch_taken_0x1fda20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA20u;
        // 0x1fda24: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda20) {
            ctx->pc = 0x1FDB98u;
            goto label_1fdb98;
        }
    }
    ctx->pc = 0x1FDA28u;
    // 0x1fda28: 0x2d220200  sltiu       $v0, $t1, 0x200
    ctx->pc = 0x1fda28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x1fda2c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FDA2Cu;
    {
        const bool branch_taken_0x1fda2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA2Cu;
        // 0x1fda30: 0x930c2  srl         $a2, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda2c) {
            ctx->pc = 0x1FDA88u;
            goto label_1fda88;
        }
    }
    ctx->pc = 0x1FDA34u;
    // 0x1fda34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fda34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fda38: 0x25a5d9c8  addiu       $a1, $t5, -0x2638
    ctx->pc = 0x1fda38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 4294957512));
    // 0x1fda3c: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1fda3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1fda40: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1fda40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1fda44: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x1fda44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1fda48: 0x854021  addu        $t0, $a0, $a1
    ctx->pc = 0x1fda48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1fda4c: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x1fda4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x1fda50: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x1fda50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1fda54: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1fda54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1fda58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fda58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fda5c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1fda5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fda60: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x1fda60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x1fda64: 0xad48000c  sw          $t0, 0xC($t2)
    ctx->pc = 0x1fda64u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 8));
    // 0x1fda68: 0xad470008  sw          $a3, 0x8($t2)
    ctx->pc = 0x1fda68u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 7));
    // 0x1fda6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fda6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fda70: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fda70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fda74: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1fda74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1fda78: 0xad0a0008  sw          $t2, 0x8($t0)
    ctx->pc = 0x1fda78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 10));
    // 0x1fda7c: 0xacea000c  sw          $t2, 0xC($a3)
    ctx->pc = 0x1fda7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 10));
    // 0x1fda80: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1FDA80u;
    {
        const bool branch_taken_0x1fda80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA80u;
        // 0x1fda84: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda80) {
            ctx->pc = 0x1FDB98u;
            goto label_1fdb98;
        }
    }
    ctx->pc = 0x1FDA88u;
label_1fda88:
    // 0x1fda88: 0x91a42  srl         $v1, $t1, 9
    ctx->pc = 0x1fda88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 9));
    // 0x1fda8c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDA8Cu;
    {
        const bool branch_taken_0x1fda8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA8Cu;
        // 0x1fda90: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda8c) {
            ctx->pc = 0x1FDA9Cu;
            goto label_1fda9c;
        }
    }
    ctx->pc = 0x1FDA94u;
    // 0x1fda94: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1FDA94u;
    {
        const bool branch_taken_0x1fda94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA94u;
        // 0x1fda98: 0x930c2  srl         $a2, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda94) {
            ctx->pc = 0x1FDAF8u;
            goto label_1fdaf8;
        }
    }
    ctx->pc = 0x1FDA9Cu;
label_1fda9c:
    // 0x1fda9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDA9Cu;
    {
        const bool branch_taken_0x1fda9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA9Cu;
        // 0x1fdaa0: 0x91182  srl         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda9c) {
            ctx->pc = 0x1FDAACu;
            goto label_1fdaac;
        }
    }
    ctx->pc = 0x1FDAA4u;
    // 0x1fdaa4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1FDAA4u;
    {
        const bool branch_taken_0x1fdaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAA4u;
        // 0x1fdaa8: 0x24460038  addiu       $a2, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdaa4) {
            ctx->pc = 0x1FDAF8u;
            goto label_1fdaf8;
        }
    }
    ctx->pc = 0x1FDAACu;
label_1fdaac:
    // 0x1fdaac: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x1fdaacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x1fdab0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FDAB0u;
    {
        const bool branch_taken_0x1fdab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAB0u;
        // 0x1fdab4: 0x2466005b  addiu       $a2, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdab0) {
            ctx->pc = 0x1FDAF8u;
            goto label_1fdaf8;
        }
    }
    ctx->pc = 0x1FDAB8u;
    // 0x1fdab8: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x1fdab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x1fdabc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDABCu;
    {
        const bool branch_taken_0x1fdabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDABCu;
        // 0x1fdac0: 0x91302  srl         $v0, $t1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdabc) {
            ctx->pc = 0x1FDACCu;
            goto label_1fdacc;
        }
    }
    ctx->pc = 0x1FDAC4u;
    // 0x1fdac4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1FDAC4u;
    {
        const bool branch_taken_0x1fdac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAC4u;
        // 0x1fdac8: 0x2446006e  addiu       $a2, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdac4) {
            ctx->pc = 0x1FDAF8u;
            goto label_1fdaf8;
        }
    }
    ctx->pc = 0x1FDACCu;
label_1fdacc:
    // 0x1fdacc: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x1fdaccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x1fdad0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDAD0u;
    {
        const bool branch_taken_0x1fdad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAD0u;
        // 0x1fdad4: 0x913c2  srl         $v0, $t1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdad0) {
            ctx->pc = 0x1FDAE0u;
            goto label_1fdae0;
        }
    }
    ctx->pc = 0x1FDAD8u;
    // 0x1fdad8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FDAD8u;
    {
        const bool branch_taken_0x1fdad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAD8u;
        // 0x1fdadc: 0x24460077  addiu       $a2, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdad8) {
            ctx->pc = 0x1FDAF8u;
            goto label_1fdaf8;
        }
    }
    ctx->pc = 0x1FDAE0u;
label_1fdae0:
    // 0x1fdae0: 0x2c620555  sltiu       $v0, $v1, 0x555
    ctx->pc = 0x1fdae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x1fdae4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDAE4u;
    {
        const bool branch_taken_0x1fdae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAE4u;
        // 0x1fdae8: 0x91482  srl         $v0, $t1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdae4) {
            ctx->pc = 0x1FDAF4u;
            goto label_1fdaf4;
        }
    }
    ctx->pc = 0x1FDAECu;
    // 0x1fdaec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FDAECu;
    {
        const bool branch_taken_0x1fdaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAECu;
        // 0x1fdaf0: 0x2446007c  addiu       $a2, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdaec) {
            ctx->pc = 0x1FDAF8u;
            goto label_1fdaf8;
        }
    }
    ctx->pc = 0x1FDAF4u;
label_1fdaf4:
    // 0x1fdaf4: 0x2406007e  addiu       $a2, $zero, 0x7E
    ctx->pc = 0x1fdaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_1fdaf8:
    // 0x1fdaf8: 0x25abd9c8  addiu       $t3, $t5, -0x2638
    ctx->pc = 0x1fdaf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 4294957512));
    // 0x1fdafc: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1fdafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1fdb00: 0x4b4021  addu        $t0, $v0, $t3
    ctx->pc = 0x1fdb00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1fdb04: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x1fdb04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1fdb08: 0x54e8000e  bnel        $a3, $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FDB08u;
    {
        const bool branch_taken_0x1fdb08 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x1fdb08) {
            ctx->pc = 0x1FDB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDB08u;
            // 0x1fdb0c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDB44u;
            goto label_1fdb44;
        }
    }
    ctx->pc = 0x1FDB10u;
    // 0x1fdb10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fdb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fdb14: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x1fdb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1fdb18: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1fdb18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1fdb1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fdb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdb20: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x1fdb20u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x1fdb24: 0x8d650004  lw          $a1, 0x4($t3)
    ctx->pc = 0x1fdb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1fdb28: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1fdb28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1fdb2c: 0x642014  dsllv       $a0, $a0, $v1
    ctx->pc = 0x1fdb2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x1fdb30: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1fdb30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1fdb34: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1fdb34u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1fdb38: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1fdb38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1fdb3c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FDB3Cu;
    {
        const bool branch_taken_0x1fdb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB3Cu;
        // 0x1fdb40: 0xad650004  sw          $a1, 0x4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb3c) {
            ctx->pc = 0x1FDB88u;
            goto label_1fdb88;
        }
    }
    ctx->pc = 0x1FDB44u;
label_1fdb44:
    // 0x1fdb44: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fdb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fdb48: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x1fdb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x1fdb4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1fdb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fdb50: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x1fdb50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fdb54: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1FDB54u;
    {
        const bool branch_taken_0x1fdb54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb54) {
            ctx->pc = 0x1FDB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDB54u;
            // 0x1fdb58: 0x8ce8000c  lw          $t0, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDB88u;
            goto label_1fdb88;
        }
    }
    ctx->pc = 0x1FDB5Cu;
    // 0x1fdb5c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1fdb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1fdb60: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x1fdb60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x1fdb64: 0x8ce70008  lw          $a3, 0x8($a3)
    ctx->pc = 0x1fdb64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1fdb68:
    // 0x1fdb68: 0x50e80007  beql        $a3, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FDB68u;
    {
        const bool branch_taken_0x1fdb68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x1fdb68) {
            ctx->pc = 0x1FDB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDB68u;
            // 0x1fdb6c: 0x8ce8000c  lw          $t0, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDB88u;
            goto label_1fdb88;
        }
    }
    ctx->pc = 0x1FDB70u;
    // 0x1fdb70: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1fdb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1fdb74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fdb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fdb78: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x1fdb78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fdb7c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FDB7Cu;
    {
        const bool branch_taken_0x1fdb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb7c) {
            ctx->pc = 0x1FDB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDB7Cu;
            // 0x1fdb80: 0x8ce70008  lw          $a3, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdb68;
        }
    }
    ctx->pc = 0x1FDB84u;
    // 0x1fdb84: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x1fdb84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1fdb88:
    // 0x1fdb88: 0xad48000c  sw          $t0, 0xC($t2)
    ctx->pc = 0x1fdb88u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 8));
    // 0x1fdb8c: 0xad470008  sw          $a3, 0x8($t2)
    ctx->pc = 0x1fdb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 7));
    // 0x1fdb90: 0xad0a0008  sw          $t2, 0x8($t0)
    ctx->pc = 0x1fdb90u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 10));
    // 0x1fdb94: 0xacea000c  sw          $t2, 0xC($a3)
    ctx->pc = 0x1fdb94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 10));
label_1fdb98:
    // 0x1fdb98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fdb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdb9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fdb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fdba0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1fdba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fdba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fdba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdba8: 0x807fe9e  j           func_1FFA78
    ctx->pc = 0x1FDBA8u;
    ctx->pc = 0x1FDBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDBA8u;
    // 0x1fdbac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA78u;
    NullVoid_0x1ffa78(rdram, ctx, runtime); return;
    ctx->pc = 0x1FDBB0u;
label_1fdbb0:
    // 0x1fdbb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fdbb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fdbb4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1fdbb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fdbb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fdbb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBBCu;
        // 0x1fdbc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDBC4u;
}
