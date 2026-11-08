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

// Function: FUN_001d9fd0
// Address: 0x1d9fd0 - 0x1da538
void FUN_001d9fd0_0x1d9fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d9fd0_0x1d9fd0");
#endif

    switch (ctx->pc) {
        case 0x1da3e0u: goto label_1da3e0;
        case 0x1da41cu: goto label_1da41c;
        case 0x1da434u: goto label_1da434;
        case 0x1da440u: goto label_1da440;
        case 0x1da488u: goto label_1da488;
        case 0x1da4c4u: goto label_1da4c4;
        case 0x1da4dcu: goto label_1da4dc;
        case 0x1da4e8u: goto label_1da4e8;
        default: break;
    }

    ctx->pc = 0x1d9fd0u;

    // 0x1d9fd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d9fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d9fd4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1d9fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d9fd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9fdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9fe0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9fe4: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x1d9fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d9fe8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d9fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d9fec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d9fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d9ff0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d9ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d9ff4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d9ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d9ff8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1d9ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1d9ffc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1d9ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1da000: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1da000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1da004: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1da004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1da008: 0x90ae0000  lbu         $t6, 0x0($a1)
    ctx->pc = 0x1da008u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da00c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1da00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1da010: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1da010u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1da014: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1da014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1da018: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x1da018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1da01c: 0x24a70003  addiu       $a3, $a1, 0x3
    ctx->pc = 0x1da01cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x1da020: 0x90b60000  lbu         $s6, 0x0($a1)
    ctx->pc = 0x1da020u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da024: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1da024u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1da028: 0x90770000  lbu         $s7, 0x0($v1)
    ctx->pc = 0x1da028u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1da02c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1da02cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1da030: 0x90980000  lbu         $t8, 0x0($a0)
    ctx->pc = 0x1da030u;
    SET_GPR_ZE32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1da034: 0x11c20054  beq         $t6, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1DA034u;
    {
        const bool branch_taken_0x1da034 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DA038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA034u;
        // 0x1da038: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da034) {
            ctx->pc = 0x1DA188u;
            goto label_1da188;
        }
    }
    ctx->pc = 0x1DA03Cu;
    // 0x1da03c: 0x29c20008  slti        $v0, $t6, 0x8
    ctx->pc = 0x1da03cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1da040: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DA040u;
    {
        const bool branch_taken_0x1da040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA040u;
        // 0x1da044: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da040) {
            ctx->pc = 0x1DA068u;
            goto label_1da068;
        }
    }
    ctx->pc = 0x1DA048u;
    // 0x1da048: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da04c: 0x11c200ae  beq         $t6, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x1DA04Cu;
    {
        const bool branch_taken_0x1da04c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DA050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA04Cu;
        // 0x1da050: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da04c) {
            ctx->pc = 0x1DA308u;
            goto label_1da308;
        }
    }
    ctx->pc = 0x1DA054u;
    // 0x1da054: 0x11c200ac  beq         $t6, $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x1DA054u;
    {
        const bool branch_taken_0x1da054 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DA058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA054u;
        // 0x1da058: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da054) {
            ctx->pc = 0x1DA308u;
            goto label_1da308;
        }
    }
    ctx->pc = 0x1DA05Cu;
    // 0x1da05c: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x1DA05Cu;
    {
        const bool branch_taken_0x1da05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA05Cu;
        // 0x1da060: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da05c) {
            ctx->pc = 0x1DA514u;
            goto label_1da514;
        }
    }
    ctx->pc = 0x1DA064u;
    // 0x1da064: 0x0  nop
    ctx->pc = 0x1da064u;
    // NOP
label_1da068:
    // 0x1da068: 0x11c2006d  beq         $t6, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1DA068u;
    {
        const bool branch_taken_0x1da068 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA068u;
        // 0x1da06c: 0x29c20042  slti        $v0, $t6, 0x42 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)66) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da068) {
            ctx->pc = 0x1DA220u;
            goto label_1da220;
        }
    }
    ctx->pc = 0x1DA070u;
    // 0x1da070: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA070u;
    {
        const bool branch_taken_0x1da070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA070u;
        // 0x1da074: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da070) {
            ctx->pc = 0x1DA090u;
            goto label_1da090;
        }
    }
    ctx->pc = 0x1DA078u;
    // 0x1da078: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1da078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1da07c: 0x11c20008  beq         $t6, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA07Cu;
    {
        const bool branch_taken_0x1da07c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DA080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA07Cu;
        // 0x1da080: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da07c) {
            ctx->pc = 0x1DA0A0u;
            goto label_1da0a0;
        }
    }
    ctx->pc = 0x1DA084u;
    // 0x1da084: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x1DA084u;
    {
        const bool branch_taken_0x1da084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA084u;
        // 0x1da088: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da084) {
            ctx->pc = 0x1DA514u;
            goto label_1da514;
        }
    }
    ctx->pc = 0x1DA08Cu;
    // 0x1da08c: 0x0  nop
    ctx->pc = 0x1da08cu;
    // NOP
label_1da090:
    // 0x1da090: 0x11c200c7  beq         $t6, $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x1DA090u;
    {
        const bool branch_taken_0x1da090 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 2));
        if (branch_taken_0x1da090) {
            ctx->pc = 0x1DA3B0u;
            goto label_1da3b0;
        }
    }
    ctx->pc = 0x1DA098u;
    // 0x1da098: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x1DA098u;
    {
        const bool branch_taken_0x1da098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA098u;
        // 0x1da09c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da098) {
            ctx->pc = 0x1DA510u;
            goto label_1da510;
        }
    }
    ctx->pc = 0x1DA0A0u;
label_1da0a0:
    // 0x1da0a0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1da0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1da0a4: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x1da0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1da0a8: 0x244a71d4  addiu       $t2, $v0, 0x71D4
    ctx->pc = 0x1da0a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 29140));
    // 0x1da0ac: 0x240800f0  addiu       $t0, $zero, 0xF0
    ctx->pc = 0x1da0acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1da0b0: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x1da0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3871D4u));
    // 0x1da0b4: 0x90f90000  lbu         $t9, 0x0($a3)
    ctx->pc = 0x1da0b4u;
    SET_GPR_ZE32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1da0b8: 0x1048000f  beq         $v0, $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DA0B8u;
    {
        const bool branch_taken_0x1da0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x1DA0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA0B8u;
        // 0x1da0bc: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da0b8) {
            ctx->pc = 0x1DA0F8u;
            goto label_1da0f8;
        }
    }
    ctx->pc = 0x1DA0C0u;
    // 0x1da0c0: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x1da0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x1da0c4: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x1da0c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x1da0c8: 0x252471d0  addiu       $a0, $t1, 0x71D0
    ctx->pc = 0x1da0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 29136));
    // 0x1da0cc: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x1da0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1da0d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1da0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3871D0u));
    // 0x1da0d4: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1da0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1da0d8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1da0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1da0dc: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x1da0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x1da0e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1da0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1da0e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da0e8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1da0e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3871D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3871D0u, _value); } while (0);
    // 0x1da0ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA0ECu;
    {
        const bool branch_taken_0x1da0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA0ECu;
        // 0x1da0f0: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da0ec) {
            ctx->pc = 0x1DA100u;
            goto label_1da100;
        }
    }
    ctx->pc = 0x1DA0F4u;
    // 0x1da0f4: 0x0  nop
    ctx->pc = 0x1da0f4u;
    // NOP
label_1da0f8:
    // 0x1da0f8: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1da0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1da0fc: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x1da0fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
label_1da100:
    // 0x1da100: 0x252f71d0  addiu       $t7, $t1, 0x71D0
    ctx->pc = 0x1da100u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 29136));
    // 0x1da104: 0x164902  srl         $t1, $s6, 4
    ctx->pc = 0x1da104u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 22), 4));
    // 0x1da108: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x1da108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1da10c: 0x24c370d0  addiu       $v1, $a2, 0x70D0
    ctx->pc = 0x1da10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28880));
    // 0x1da110: 0x32d2000f  andi        $s2, $s6, 0xF
    ctx->pc = 0x1da110u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)15);
    // 0x1da114: 0x32f4000f  andi        $s4, $s7, 0xF
    ctx->pc = 0x1da114u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)15);
    // 0x1da118: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1da118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da11c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da120: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x1da120u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da124: 0x24480009  addiu       $t0, $v0, 0x9
    ctx->pc = 0x1da124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1da128: 0x260602d  daddu       $t4, $s3, $zero
    ctx->pc = 0x1da128u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da12c: 0x2411007e  addiu       $s1, $zero, 0x7E
    ctx->pc = 0x1da12cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1da130: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x1da130u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da134: 0x172102  srl         $a0, $s7, 4
    ctx->pc = 0x1da134u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 23), 4));
    // 0x1da138: 0x1a0702d  daddu       $t6, $t5, $zero
    ctx->pc = 0x1da138u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da13c: 0x2407fff7  addiu       $a3, $zero, -0x9
    ctx->pc = 0x1da13cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1da140: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x1da140u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da144: 0xade80000  sw          $t0, 0x0($t7)
    ctx->pc = 0x1da144u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 8));
    // 0x1da148: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x1da148u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da14c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1da14cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1da150: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x1da150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da154: 0xa1910000  sb          $s1, 0x0($t4)
    ctx->pc = 0x1da154u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1da158: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1da158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da15c: 0xa1a00001  sb          $zero, 0x1($t5)
    ctx->pc = 0x1da15cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1da160: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1da160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da164: 0xa1c90002  sb          $t1, 0x2($t6)
    ctx->pc = 0x1da164u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x1da168: 0xa1520003  sb          $s2, 0x3($t2)
    ctx->pc = 0x1da168u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x1da16c: 0xa1640004  sb          $a0, 0x4($t3)
    ctx->pc = 0x1da16cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x1da170: 0xa0b40005  sb          $s4, 0x5($a1)
    ctx->pc = 0x1da170u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 20));
    // 0x1da174: 0xa0d80006  sb          $t8, 0x6($a2)
    ctx->pc = 0x1da174u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 24));
    // 0x1da178: 0xa0590007  sb          $t9, 0x7($v0)
    ctx->pc = 0x1da178u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 25));
    // 0x1da17c: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x1DA17Cu;
    {
        const bool branch_taken_0x1da17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA17Cu;
        // 0x1da180: 0xa2670008  sb          $a3, 0x8($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da17c) {
            ctx->pc = 0x1DA50Cu;
            goto label_1da50c;
        }
    }
    ctx->pc = 0x1DA184u;
    // 0x1da184: 0x0  nop
    ctx->pc = 0x1da184u;
    // NOP
label_1da188:
    // 0x1da188: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1da188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1da18c: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x1da18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1da190: 0x244a71d4  addiu       $t2, $v0, 0x71D4
    ctx->pc = 0x1da190u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 29140));
    // 0x1da194: 0x240800f0  addiu       $t0, $zero, 0xF0
    ctx->pc = 0x1da194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1da198: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x1da198u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3871D4u));
    // 0x1da19c: 0x90f90000  lbu         $t9, 0x0($a3)
    ctx->pc = 0x1da19cu;
    SET_GPR_ZE32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1da1a0: 0x1048000f  beq         $v0, $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DA1A0u;
    {
        const bool branch_taken_0x1da1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x1DA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1A0u;
        // 0x1da1a4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1a0) {
            ctx->pc = 0x1DA1E0u;
            goto label_1da1e0;
        }
    }
    ctx->pc = 0x1DA1A8u;
    // 0x1da1a8: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x1da1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x1da1ac: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x1da1acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x1da1b0: 0x252471d0  addiu       $a0, $t1, 0x71D0
    ctx->pc = 0x1da1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 29136));
    // 0x1da1b4: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x1da1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1da1b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1da1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3871D0u));
    // 0x1da1bc: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1da1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1da1c0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1da1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1da1c4: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x1da1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x1da1c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1da1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1da1cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da1d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1da1d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3871D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3871D0u, _value); } while (0);
    // 0x1da1d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA1D4u;
    {
        const bool branch_taken_0x1da1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1D4u;
        // 0x1da1d8: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1d4) {
            ctx->pc = 0x1DA1E8u;
            goto label_1da1e8;
        }
    }
    ctx->pc = 0x1DA1DCu;
    // 0x1da1dc: 0x0  nop
    ctx->pc = 0x1da1dcu;
    // NOP
label_1da1e0:
    // 0x1da1e0: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1da1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1da1e4: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x1da1e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
label_1da1e8:
    // 0x1da1e8: 0x253071d0  addiu       $s0, $t1, 0x71D0
    ctx->pc = 0x1da1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 29136));
    // 0x1da1ec: 0x24c370d0  addiu       $v1, $a2, 0x70D0
    ctx->pc = 0x1da1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28880));
    // 0x1da1f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1da1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da1f4: 0x32d3000f  andi        $s3, $s6, 0xF
    ctx->pc = 0x1da1f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)15);
    // 0x1da1f8: 0x32f5000f  andi        $s5, $s7, 0xF
    ctx->pc = 0x1da1f8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)15);
    // 0x1da1fc: 0x2412007e  addiu       $s2, $zero, 0x7E
    ctx->pc = 0x1da1fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1da200: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1da200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da204: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da208: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x1da208u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da20c: 0x244b0009  addiu       $t3, $v0, 0x9
    ctx->pc = 0x1da20cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1da210: 0x280702d  daddu       $t6, $s4, $zero
    ctx->pc = 0x1da210u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da214: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1DA214u;
    {
        const bool branch_taken_0x1da214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA214u;
        // 0x1da218: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da214) {
            ctx->pc = 0x1DA2B0u;
            goto label_1da2b0;
        }
    }
    ctx->pc = 0x1DA21Cu;
    // 0x1da21c: 0x0  nop
    ctx->pc = 0x1da21cu;
    // NOP
label_1da220:
    // 0x1da220: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1da220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1da224: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x1da224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1da228: 0x244a71d4  addiu       $t2, $v0, 0x71D4
    ctx->pc = 0x1da228u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 29140));
    // 0x1da22c: 0x240800f0  addiu       $t0, $zero, 0xF0
    ctx->pc = 0x1da22cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1da230: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x1da230u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3871D4u));
    // 0x1da234: 0x90f90000  lbu         $t9, 0x0($a3)
    ctx->pc = 0x1da234u;
    SET_GPR_ZE32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1da238: 0x1048000f  beq         $v0, $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DA238u;
    {
        const bool branch_taken_0x1da238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x1DA23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA238u;
        // 0x1da23c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da238) {
            ctx->pc = 0x1DA278u;
            goto label_1da278;
        }
    }
    ctx->pc = 0x1DA240u;
    // 0x1da240: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x1da240u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x1da244: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x1da244u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x1da248: 0x252471d0  addiu       $a0, $t1, 0x71D0
    ctx->pc = 0x1da248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 29136));
    // 0x1da24c: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x1da24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1da250: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1da250u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3871D0u));
    // 0x1da254: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1da254u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1da258: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1da258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1da25c: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x1da25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x1da260: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1da260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1da264: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da268: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1da268u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3871D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3871D0u, _value); } while (0);
    // 0x1da26c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA26Cu;
    {
        const bool branch_taken_0x1da26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA26Cu;
        // 0x1da270: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da26c) {
            ctx->pc = 0x1DA280u;
            goto label_1da280;
        }
    }
    ctx->pc = 0x1DA274u;
    // 0x1da274: 0x0  nop
    ctx->pc = 0x1da274u;
    // NOP
label_1da278:
    // 0x1da278: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1da278u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1da27c: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x1da27cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
label_1da280:
    // 0x1da280: 0x253071d0  addiu       $s0, $t1, 0x71D0
    ctx->pc = 0x1da280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 29136));
    // 0x1da284: 0x24c370d0  addiu       $v1, $a2, 0x70D0
    ctx->pc = 0x1da284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28880));
    // 0x1da288: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1da288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da28c: 0x32d3000f  andi        $s3, $s6, 0xF
    ctx->pc = 0x1da28cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)15);
    // 0x1da290: 0x32f5000f  andi        $s5, $s7, 0xF
    ctx->pc = 0x1da290u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)15);
    // 0x1da294: 0x2412007e  addiu       $s2, $zero, 0x7E
    ctx->pc = 0x1da294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1da298: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1da298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da29c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da2a0: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x1da2a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da2a4: 0x244b0009  addiu       $t3, $v0, 0x9
    ctx->pc = 0x1da2a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1da2a8: 0x280702d  daddu       $t6, $s4, $zero
    ctx->pc = 0x1da2a8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da2ac: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x1da2acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1da2b0:
    // 0x1da2b0: 0x1c0782d  daddu       $t7, $t6, $zero
    ctx->pc = 0x1da2b0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da2b4: 0x164102  srl         $t0, $s6, 4
    ctx->pc = 0x1da2b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 22), 4));
    // 0x1da2b8: 0x1e0682d  daddu       $t5, $t7, $zero
    ctx->pc = 0x1da2b8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da2bc: 0x172102  srl         $a0, $s7, 4
    ctx->pc = 0x1da2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 23), 4));
    // 0x1da2c0: 0x1a0482d  daddu       $t1, $t5, $zero
    ctx->pc = 0x1da2c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da2c4: 0x2407fff7  addiu       $a3, $zero, -0x9
    ctx->pc = 0x1da2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1da2c8: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1da2c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da2cc: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x1da2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x1da2d0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1da2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da2d4: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1da2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1da2d8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1da2d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da2dc: 0xa1d20000  sb          $s2, 0x0($t6)
    ctx->pc = 0x1da2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x1da2e0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1da2e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da2e4: 0xa1ec0001  sb          $t4, 0x1($t7)
    ctx->pc = 0x1da2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1), (uint8_t)GPR_U32(ctx, 12));
    // 0x1da2e8: 0xa1a80002  sb          $t0, 0x2($t5)
    ctx->pc = 0x1da2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 2), (uint8_t)GPR_U32(ctx, 8));
    // 0x1da2ec: 0xa1330003  sb          $s3, 0x3($t1)
    ctx->pc = 0x1da2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x1da2f0: 0xa1440004  sb          $a0, 0x4($t2)
    ctx->pc = 0x1da2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x1da2f4: 0xa0b50005  sb          $s5, 0x5($a1)
    ctx->pc = 0x1da2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 21));
    // 0x1da2f8: 0xa0d80006  sb          $t8, 0x6($a2)
    ctx->pc = 0x1da2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 24));
    // 0x1da2fc: 0xa0590007  sb          $t9, 0x7($v0)
    ctx->pc = 0x1da2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 25));
    // 0x1da300: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x1DA300u;
    {
        const bool branch_taken_0x1da300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA300u;
        // 0x1da304: 0xa2870008  sb          $a3, 0x8($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 8), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da300) {
            ctx->pc = 0x1DA50Cu;
            goto label_1da50c;
        }
    }
    ctx->pc = 0x1DA308u;
label_1da308:
    // 0x1da308: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1da308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1da30c: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x1da30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1da310: 0x246371d4  addiu       $v1, $v1, 0x71D4
    ctx->pc = 0x1da310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29140));
    // 0x1da314: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1da314u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3871D4u));
    // 0x1da318: 0x1046000d  beq         $v0, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1DA318u;
    {
        const bool branch_taken_0x1da318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1DA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA318u;
        // 0x1da31c: 0x3c090038  lui         $t1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da318) {
            ctx->pc = 0x1DA350u;
            goto label_1da350;
        }
    }
    ctx->pc = 0x1DA320u;
    // 0x1da320: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1da320u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1da324: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1da324u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1da328: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x1da328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1da32c: 0x252471d0  addiu       $a0, $t1, 0x71D0
    ctx->pc = 0x1da32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 29136));
    // 0x1da330: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1da330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1da334: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1da334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1da338: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x1da338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
    // 0x1da33c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1da33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1da340: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da344: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1da344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1da348: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DA348u;
    {
        const bool branch_taken_0x1da348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA348u;
        // 0x1da34c: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da348) {
            ctx->pc = 0x1DA354u;
            goto label_1da354;
        }
    }
    ctx->pc = 0x1DA350u;
label_1da350:
    // 0x1da350: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1da350u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
label_1da354:
    // 0x1da354: 0x252971d0  addiu       $t1, $t1, 0x71D0
    ctx->pc = 0x1da354u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29136));
    // 0x1da358: 0x24c370d0  addiu       $v1, $a2, 0x70D0
    ctx->pc = 0x1da358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28880));
    // 0x1da35c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1da35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1da360: 0x240b007f  addiu       $t3, $zero, 0x7F
    ctx->pc = 0x1da360u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1da364: 0x240dfff7  addiu       $t5, $zero, -0x9
    ctx->pc = 0x1da364u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1da368: 0x435021  addu        $t2, $v0, $v1
    ctx->pc = 0x1da368u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da36c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da370: 0x436021  addu        $t4, $v0, $v1
    ctx->pc = 0x1da370u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da374: 0x24440006  addiu       $a0, $v0, 0x6
    ctx->pc = 0x1da374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x1da378: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x1da378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da37c: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x1da37cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x1da380: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1da380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da384: 0xa1400000  sb          $zero, 0x0($t2)
    ctx->pc = 0x1da384u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1da388: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1da388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da38c: 0xa0ab0000  sb          $t3, 0x0($a1)
    ctx->pc = 0x1da38cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x1da390: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1da390u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da394: 0xa0ce0001  sb          $t6, 0x1($a2)
    ctx->pc = 0x1da394u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 14));
    // 0x1da398: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x1da398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da39c: 0xa0f60002  sb          $s6, 0x2($a3)
    ctx->pc = 0x1da39cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 22));
    // 0x1da3a0: 0xa1170003  sb          $s7, 0x3($t0)
    ctx->pc = 0x1da3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 23));
    // 0x1da3a4: 0xa0580004  sb          $t8, 0x4($v0)
    ctx->pc = 0x1da3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 24));
    // 0x1da3a8: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1DA3A8u;
    {
        const bool branch_taken_0x1da3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3A8u;
        // 0x1da3ac: 0xa18d0005  sb          $t5, 0x5($t4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 12), 5), (uint8_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3a8) {
            ctx->pc = 0x1DA50Cu;
            goto label_1da50c;
        }
    }
    ctx->pc = 0x1DA3B0u;
label_1da3b0:
    // 0x1da3b0: 0x13000031  beqz        $t8, . + 4 + (0x31 << 2)
    ctx->pc = 0x1DA3B0u;
    {
        const bool branch_taken_0x1da3b0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3B0u;
        // 0x1da3b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3b0) {
            ctx->pc = 0x1DA478u;
            goto label_1da478;
        }
    }
    ctx->pc = 0x1DA3B8u;
    // 0x1da3b8: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1da3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1da3bc: 0x14580004  bne         $v0, $t8, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA3BCu;
    {
        const bool branch_taken_0x1da3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 24));
        ctx->pc = 0x1DA3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3BCu;
        // 0x1da3c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3bc) {
            ctx->pc = 0x1DA3D0u;
            goto label_1da3d0;
        }
    }
    ctx->pc = 0x1DA3C4u;
    // 0x1da3c4: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1DA3C4u;
    {
        const bool branch_taken_0x1da3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3C4u;
        // 0x1da3c8: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3c4) {
            ctx->pc = 0x1DA50Cu;
            goto label_1da50c;
        }
    }
    ctx->pc = 0x1DA3CCu;
    // 0x1da3cc: 0x0  nop
    ctx->pc = 0x1da3ccu;
    // NOP
label_1da3d0:
    // 0x1da3d0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1da3d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da3d4: 0xa2020044  sb          $v0, 0x44($s0)
    ctx->pc = 0x1da3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 2));
    // 0x1da3d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1da3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da3dc: 0x0  nop
    ctx->pc = 0x1da3dcu;
    // NOP
label_1da3e0:
    // 0x1da3e0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1da3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1da3e4: 0x631f8  dsll        $a2, $a2, 7
    ctx->pc = 0x1da3e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 7);
    // 0x1da3e8: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x1da3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1da3ec: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1da3ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1da3f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1da3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1da3f4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1da3f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da3f8: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x1da3f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1da3fc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1da3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1da400: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1da400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1da404: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DA404u;
    {
        const bool branch_taken_0x1da404 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA404u;
        // 0x1da408: 0xc2302d  daddu       $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da404) {
            ctx->pc = 0x1DA3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da3e0;
        }
    }
    ctx->pc = 0x1DA40Cu;
    // 0x1da40c: 0x4c20006  bltzl       $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA40Cu;
    {
        const bool branch_taken_0x1da40c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1da40c) {
            ctx->pc = 0x1DA410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA40Cu;
            // 0x1da410: 0x6107a  dsrl        $v0, $a2, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA428u;
            goto label_1da428;
        }
    }
    ctx->pc = 0x1DA414u;
    // 0x1da414: 0xc081a60  jal         func_206980
    ctx->pc = 0x1DA414u;
    SET_GPR_U32(ctx, 31, 0x1DA41Cu);
    ctx->pc = 0x1DA418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA414u;
    // 0x1da418: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x1DA414u, 0x1DA41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA41Cu;
label_1da41c:
    // 0x1da41c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA41Cu;
    {
        const bool branch_taken_0x1da41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da41c) {
            ctx->pc = 0x1DA440u;
            goto label_1da440;
        }
    }
    ctx->pc = 0x1DA424u;
    // 0x1da424: 0x0  nop
    ctx->pc = 0x1da424u;
    // NOP
label_1da428:
    // 0x1da428: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x1da428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1da42c: 0xc081a60  jal         func_206980
    ctx->pc = 0x1DA42Cu;
    SET_GPR_U32(ctx, 31, 0x1DA434u);
    ctx->pc = 0x1DA430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA42Cu;
    // 0x1da430: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x1DA42Cu, 0x1DA434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA434u;
label_1da434:
    // 0x1da434: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1da434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da438: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1DA438u;
    SET_GPR_U32(ctx, 31, 0x1DA440u);
    ctx->pc = 0x1DA43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA438u;
    // 0x1da43c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1DA438u, 0x1DA440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA440u;
label_1da440:
    // 0x1da440: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1da440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da444: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1da444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1da448: 0x171200  sll         $v0, $s7, 8
    ctx->pc = 0x1da448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 8));
    // 0x1da44c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1da44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1da450: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x1da450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x1da454: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1da454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1da458: 0xfe050030  sd          $a1, 0x30($s0)
    ctx->pc = 0x1da458u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 5));
    // 0x1da45c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1da45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1da460: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1da460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da464: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x1da464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1da468: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x1da468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
    // 0x1da46c: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x1da46cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x1da470: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1DA470u;
    {
        const bool branch_taken_0x1da470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA470u;
        // 0x1da474: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da470) {
            ctx->pc = 0x1DA510u;
            goto label_1da510;
        }
    }
    ctx->pc = 0x1DA478u;
label_1da478:
    // 0x1da478: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1da478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da47c: 0xa2020044  sb          $v0, 0x44($s0)
    ctx->pc = 0x1da47cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 2));
    // 0x1da480: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1da480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da484: 0x0  nop
    ctx->pc = 0x1da484u;
    // NOP
label_1da488:
    // 0x1da488: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1da488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1da48c: 0x631f8  dsll        $a2, $a2, 7
    ctx->pc = 0x1da48cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 7);
    // 0x1da490: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x1da490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1da494: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1da494u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1da498: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1da498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1da49c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1da49cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da4a0: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x1da4a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1da4a4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1da4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1da4a8: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1da4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1da4ac: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DA4ACu;
    {
        const bool branch_taken_0x1da4ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA4ACu;
        // 0x1da4b0: 0xc2302d  daddu       $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da4ac) {
            ctx->pc = 0x1DA488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da488;
        }
    }
    ctx->pc = 0x1DA4B4u;
    // 0x1da4b4: 0x4c20006  bltzl       $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA4B4u;
    {
        const bool branch_taken_0x1da4b4 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1da4b4) {
            ctx->pc = 0x1DA4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA4B4u;
            // 0x1da4b8: 0x6107a  dsrl        $v0, $a2, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA4D0u;
            goto label_1da4d0;
        }
    }
    ctx->pc = 0x1DA4BCu;
    // 0x1da4bc: 0xc081a60  jal         func_206980
    ctx->pc = 0x1DA4BCu;
    SET_GPR_U32(ctx, 31, 0x1DA4C4u);
    ctx->pc = 0x1DA4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA4BCu;
    // 0x1da4c0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x1DA4BCu, 0x1DA4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA4C4u;
label_1da4c4:
    // 0x1da4c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA4C4u;
    {
        const bool branch_taken_0x1da4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da4c4) {
            ctx->pc = 0x1DA4E8u;
            goto label_1da4e8;
        }
    }
    ctx->pc = 0x1DA4CCu;
    // 0x1da4cc: 0x0  nop
    ctx->pc = 0x1da4ccu;
    // NOP
label_1da4d0:
    // 0x1da4d0: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x1da4d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1da4d4: 0xc081a60  jal         func_206980
    ctx->pc = 0x1DA4D4u;
    SET_GPR_U32(ctx, 31, 0x1DA4DCu);
    ctx->pc = 0x1DA4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA4D4u;
    // 0x1da4d8: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x1DA4D4u, 0x1DA4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA4DCu;
label_1da4dc:
    // 0x1da4dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1da4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4e0: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1DA4E0u;
    SET_GPR_U32(ctx, 31, 0x1DA4E8u);
    ctx->pc = 0x1DA4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA4E0u;
    // 0x1da4e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1DA4E0u, 0x1DA4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA4E8u;
label_1da4e8:
    // 0x1da4e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1da4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4ec: 0x171200  sll         $v0, $s7, 8
    ctx->pc = 0x1da4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 8));
    // 0x1da4f0: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1da4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1da4f4: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x1da4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x1da4f8: 0xfe040030  sd          $a0, 0x30($s0)
    ctx->pc = 0x1da4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 4));
    // 0x1da4fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1da4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1da500: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1da500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da504: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x1da504u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x1da508: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1da508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_1da50c:
    // 0x1da50c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da50cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1da510:
    // 0x1da510: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1da514:
    // 0x1da514: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1da514u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da518: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1da518u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1da51c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1da51cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da520: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1da520u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1da524: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1da524u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da528: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1da528u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da52c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1da52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da530: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA530u;
        // 0x1da534: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA538u;
}
