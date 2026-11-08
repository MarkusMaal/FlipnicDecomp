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

// Function: FUN_001e05b8
// Address: 0x1e05b8 - 0x1e0960
void FUN_001e05b8_0x1e05b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e05b8_0x1e05b8");
#endif

    switch (ctx->pc) {
        case 0x1e0618u: goto label_1e0618;
        case 0x1e0680u: goto label_1e0680;
        case 0x1e06c0u: goto label_1e06c0;
        case 0x1e0710u: goto label_1e0710;
        case 0x1e085cu: goto label_1e085c;
        case 0x1e0874u: goto label_1e0874;
        case 0x1e0888u: goto label_1e0888;
        case 0x1e0898u: goto label_1e0898;
        case 0x1e08a8u: goto label_1e08a8;
        case 0x1e08b4u: goto label_1e08b4;
        case 0x1e08bcu: goto label_1e08bc;
        case 0x1e08c8u: goto label_1e08c8;
        case 0x1e08e0u: goto label_1e08e0;
        case 0x1e08ecu: goto label_1e08ec;
        case 0x1e08fcu: goto label_1e08fc;
        case 0x1e090cu: goto label_1e090c;
        default: break;
    }

    ctx->pc = 0x1e05b8u;

    // 0x1e05b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e05b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e05bc: 0x240200f7  addiu       $v0, $zero, 0xF7
    ctx->pc = 0x1e05bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x1e05c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e05c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e05c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e05c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e05c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e05c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e05cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e05ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e05d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e05d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e05d4: 0x92230068  lbu         $v1, 0x68($s1)
    ctx->pc = 0x1e05d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1e05d8: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1E05D8u;
    {
        const bool branch_taken_0x1e05d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E05DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05D8u;
        // 0x1e05dc: 0x286200f8  slti        $v0, $v1, 0xF8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)248) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05d8) {
            ctx->pc = 0x1E06B8u;
            goto label_1e06b8;
        }
    }
    ctx->pc = 0x1E05E0u;
    // 0x1e05e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E05E0u;
    {
        const bool branch_taken_0x1e05e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E05E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05E0u;
        // 0x1e05e4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05e0) {
            ctx->pc = 0x1E0600u;
            goto label_1e0600;
        }
    }
    ctx->pc = 0x1E05E8u;
    // 0x1e05e8: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x1e05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1e05ec: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E05ECu;
    {
        const bool branch_taken_0x1e05ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E05F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05ECu;
        // 0x1e05f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05ec) {
            ctx->pc = 0x1E0610u;
            goto label_1e0610;
        }
    }
    ctx->pc = 0x1E05F4u;
    // 0x1e05f4: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x1E05F4u;
    {
        const bool branch_taken_0x1e05f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E05F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05F4u;
        // 0x1e05f8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05f4) {
            ctx->pc = 0x1E0950u;
            goto label_1e0950;
        }
    }
    ctx->pc = 0x1E05FCu;
    // 0x1e05fc: 0x0  nop
    ctx->pc = 0x1e05fcu;
    // NOP
label_1e0600:
    // 0x1e0600: 0x10620051  beq         $v1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1E0600u;
    {
        const bool branch_taken_0x1e0600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0600u;
        // 0x1e0604: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0600) {
            ctx->pc = 0x1E0748u;
            goto label_1e0748;
        }
    }
    ctx->pc = 0x1E0608u;
    // 0x1e0608: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x1E0608u;
    {
        const bool branch_taken_0x1e0608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0608u;
        // 0x1e060c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0608) {
            ctx->pc = 0x1E0950u;
            goto label_1e0950;
        }
    }
    ctx->pc = 0x1E0610u;
label_1e0610:
    // 0x1e0610: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0614: 0x26270060  addiu       $a3, $s1, 0x60
    ctx->pc = 0x1e0614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_1e0618:
    // 0x1e0618: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1e0618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e061c: 0x631f8  dsll        $a2, $a2, 7
    ctx->pc = 0x1e061cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 7);
    // 0x1e0620: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x1e0620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1e0624: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1e0624u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0628: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e0628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e062c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1e062cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e0630: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x1e0630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1e0634: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1e0634u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1e0638: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1e0638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1e063c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E063Cu;
    {
        const bool branch_taken_0x1e063c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E063Cu;
        // 0x1e0640: 0xc2302d  daddu       $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e063c) {
            ctx->pc = 0x1E0618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0618;
        }
    }
    ctx->pc = 0x1E0644u;
    // 0x1e0644: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1e0644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1e0648: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x1e0648u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
    // 0x1e064c: 0x24a5ab10  addiu       $a1, $a1, -0x54F0
    ctx->pc = 0x1e064cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945552));
    // 0x1e0650: 0x2549a310  addiu       $t1, $t2, -0x5CF0
    ctx->pc = 0x1e0650u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943504));
    // 0x1e0654: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e0654u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x38AB10u));
    // 0x1e0658: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x1e0658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1e065c: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x1e065cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1e0660: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1e0660u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1e0664: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x1e0664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1e0668: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e066c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1e066cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e0670: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e0670u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1e0674: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x1e0674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1e0678: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x1E0678u;
    {
        const bool branch_taken_0x1e0678 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0678u;
        // 0x1e067c: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0678) {
            ctx->pc = 0x1E06A8u;
            goto label_1e06a8;
        }
    }
    ctx->pc = 0x1E0680u;
label_1e0680:
    // 0x1e0680: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e0680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e0684: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1e0684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1e0688: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1e0688u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e068c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1e068cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1e0690: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x1e0690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1e0694: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0698: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1e0698u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e069c: 0x14e0fff8  bnez        $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E069Cu;
    {
        const bool branch_taken_0x1e069c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E06A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E069Cu;
        // 0x1e06a0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e069c) {
            ctx->pc = 0x1E0680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0680;
        }
    }
    ctx->pc = 0x1E06A4u;
    // 0x1e06a4: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x1e06a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1e06a8:
    // 0x1e06a8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1e06a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1e06ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1e06acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1e06b0: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x1E06B0u;
    {
        const bool branch_taken_0x1e06b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06B0u;
        // 0x1e06b4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e06b0) {
            ctx->pc = 0x1E0944u;
            goto label_1e0944;
        }
    }
    ctx->pc = 0x1E06B8u;
label_1e06b8:
    // 0x1e06b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e06b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e06bc: 0x26270060  addiu       $a3, $s1, 0x60
    ctx->pc = 0x1e06bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_1e06c0:
    // 0x1e06c0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1e06c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e06c4: 0x631f8  dsll        $a2, $a2, 7
    ctx->pc = 0x1e06c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 7);
    // 0x1e06c8: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x1e06c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1e06cc: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1e06ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e06d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e06d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e06d4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1e06d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e06d8: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x1e06d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1e06dc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1e06dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1e06e0: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1e06e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1e06e4: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E06E4u;
    {
        const bool branch_taken_0x1e06e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06E4u;
        // 0x1e06e8: 0xc2302d  daddu       $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e06e4) {
            ctx->pc = 0x1E06C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e06c0;
        }
    }
    ctx->pc = 0x1E06ECu;
    // 0x1e06ec: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x1e06ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1e06f0: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x1e06f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1e06f4: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1e06f4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1e06f8: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x1E06F8u;
    {
        const bool branch_taken_0x1e06f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E06FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06F8u;
        // 0x1e06fc: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e06f8) {
            ctx->pc = 0x1E0738u;
            goto label_1e0738;
        }
    }
    ctx->pc = 0x1E0700u;
    // 0x1e0700: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x1e0700u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
    // 0x1e0704: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1e0704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1e0708: 0x2549a310  addiu       $t1, $t2, -0x5CF0
    ctx->pc = 0x1e0708u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943504));
    // 0x1e070c: 0x24a5ab10  addiu       $a1, $a1, -0x54F0
    ctx->pc = 0x1e070cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945552));
label_1e0710:
    // 0x1e0710: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e0710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e0714: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1e0714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1e0718: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1e0718u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e071c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1e071cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1e0720: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x1e0720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1e0724: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0728: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1e0728u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e072c: 0x14e0fff8  bnez        $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E072Cu;
    {
        const bool branch_taken_0x1e072c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E072Cu;
        // 0x1e0730: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e072c) {
            ctx->pc = 0x1E0710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0710;
        }
    }
    ctx->pc = 0x1E0734u;
    // 0x1e0734: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x1e0734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1e0738:
    // 0x1e0738: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1e0738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1e073c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1e073cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1e0740: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1E0740u;
    {
        const bool branch_taken_0x1e0740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0740u;
        // 0x1e0744: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0740) {
            ctx->pc = 0x1E0944u;
            goto label_1e0944;
        }
    }
    ctx->pc = 0x1E0748u;
label_1e0748:
    // 0x1e0748: 0x26270060  addiu       $a3, $s1, 0x60
    ctx->pc = 0x1e0748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1e074c: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x1e074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1e0750: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x1e0750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e0754: 0x90c80000  lbu         $t0, 0x0($a2)
    ctx->pc = 0x1e0754u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e0758: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e0758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e075c: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1e075cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x1e0760: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1e0760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e0764: 0x90c90000  lbu         $t1, 0x0($a2)
    ctx->pc = 0x1e0764u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e0768: 0x1102002d  beq         $t0, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1E0768u;
    {
        const bool branch_taken_0x1e0768 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0768u;
        // 0x1e076c: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0768) {
            ctx->pc = 0x1E0820u;
            goto label_1e0820;
        }
    }
    ctx->pc = 0x1E0770u;
    // 0x1e0770: 0x29020052  slti        $v0, $t0, 0x52
    ctx->pc = 0x1e0770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)82) ? 1 : 0);
    // 0x1e0774: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0774u;
    {
        const bool branch_taken_0x1e0774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0774u;
        // 0x1e0778: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0774) {
            ctx->pc = 0x1E0790u;
            goto label_1e0790;
        }
    }
    ctx->pc = 0x1E077Cu;
    // 0x1e077c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1e077cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1e0780: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0780u;
    {
        const bool branch_taken_0x1e0780 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e0780) {
            ctx->pc = 0x1E0784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0780u;
            // 0x1e0784: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E07A0u;
            goto label_1e07a0;
        }
    }
    ctx->pc = 0x1E0788u;
    // 0x1e0788: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1E0788u;
    {
        const bool branch_taken_0x1e0788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0788u;
        // 0x1e078c: 0x8e220060  lw          $v0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0788) {
            ctx->pc = 0x1E0940u;
            goto label_1e0940;
        }
    }
    ctx->pc = 0x1E0790u;
label_1e0790:
    // 0x1e0790: 0x51020061  beql        $t0, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1E0790u;
    {
        const bool branch_taken_0x1e0790 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e0790) {
            ctx->pc = 0x1E0794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0790u;
            // 0x1e0794: 0x90850000  lbu         $a1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0918u;
            goto label_1e0918;
        }
    }
    ctx->pc = 0x1E0798u;
    // 0x1e0798: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1E0798u;
    {
        const bool branch_taken_0x1e0798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0798u;
        // 0x1e079c: 0x8e220060  lw          $v0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0798) {
            ctx->pc = 0x1E0940u;
            goto label_1e0940;
        }
    }
    ctx->pc = 0x1E07A0u;
label_1e07a0:
    // 0x1e07a0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e07a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e07a4: 0x2446ab14  addiu       $a2, $v0, -0x54EC
    ctx->pc = 0x1e07a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945556));
    // 0x1e07a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e07a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e07ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e07acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x38AB14u));
    // 0x1e07b0: 0x92240068  lbu         $a0, 0x68($s1)
    ctx->pc = 0x1e07b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1e07b4: 0x1044000c  beq         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E07B4u;
    {
        const bool branch_taken_0x1e07b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07B4u;
        // 0x1e07b8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07b4) {
            ctx->pc = 0x1E07E8u;
            goto label_1e07e8;
        }
    }
    ctx->pc = 0x1E07BCu;
    // 0x1e07bc: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1e07bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1e07c0: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1e07c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1e07c4: 0x24a3ab10  addiu       $v1, $a1, -0x54F0
    ctx->pc = 0x1e07c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945552));
    // 0x1e07c8: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x1e07c8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
    // 0x1e07cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e07ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x38AB10u));
    // 0x1e07d0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e07d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x1e07d4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1e07d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1e07d8: 0xa024a310  sb          $a0, -0x5CF0($at)
    ctx->pc = 0x1e07d8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294943504), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e07dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e07dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e07e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E07E0u;
    {
        const bool branch_taken_0x1e07e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E07E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07E0u;
        // 0x1e07e4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07e0) {
            ctx->pc = 0x1E07F0u;
            goto label_1e07f0;
        }
    }
    ctx->pc = 0x1E07E8u;
label_1e07e8:
    // 0x1e07e8: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x1e07e8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
    // 0x1e07ec: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1e07ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_1e07f0:
    // 0x1e07f0: 0x24a5ab10  addiu       $a1, $a1, -0x54F0
    ctx->pc = 0x1e07f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945552));
    // 0x1e07f4: 0x2543a310  addiu       $v1, $t2, -0x5CF0
    ctx->pc = 0x1e07f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943504));
    // 0x1e07f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e07fc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1e07fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0800: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0804: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e0804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0808: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e080c: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x1e080cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x1e0810: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e0810u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1e0814: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1E0814u;
    {
        const bool branch_taken_0x1e0814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0814u;
        // 0x1e0818: 0xa0690000  sb          $t1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0814) {
            ctx->pc = 0x1E0948u;
            goto label_1e0948;
        }
    }
    ctx->pc = 0x1E081Cu;
    // 0x1e081c: 0x0  nop
    ctx->pc = 0x1e081cu;
    // NOP
label_1e0820:
    // 0x1e0820: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x1e0820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1e0824: 0x90900000  lbu         $s0, 0x0($a0)
    ctx->pc = 0x1e0824u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e0828: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1e0828u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1e082c: 0x24c40003  addiu       $a0, $a2, 0x3
    ctx->pc = 0x1e082cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1e0830: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x1e0830u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x1e0834: 0x24c50004  addiu       $a1, $a2, 0x4
    ctx->pc = 0x1e0834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1e0838: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e0838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e083c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1e083cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1e0840: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1e0840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1e0844: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1e0844u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e0848: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1e0848u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1e084c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1e084cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1e0850: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1e0850u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1e0854: 0xc08218c  jal         func_208630
    ctx->pc = 0x1E0854u;
    SET_GPR_U32(ctx, 31, 0x1E085Cu);
    ctx->pc = 0x1E0858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0854u;
    // 0x1e0858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1E0854u, 0x1E085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E085Cu;
label_1e085c:
    // 0x1e085c: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E085Cu;
    {
        const bool branch_taken_0x1e085c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1e085c) {
            ctx->pc = 0x1E0874u;
            goto label_1e0874;
        }
    }
    ctx->pc = 0x1E0864u;
    // 0x1e0864: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1e0864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1e0868: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1e0868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1e086c: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1E086Cu;
    SET_GPR_U32(ctx, 31, 0x1E0874u);
    ctx->pc = 0x1E0870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E086Cu;
    // 0x1e0870: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1E086Cu, 0x1E0874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0874u;
label_1e0874:
    // 0x1e0874: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1e0874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1e0878: 0xdc303948  ld          $s0, 0x3948($at)
    ctx->pc = 0x1e0878u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x223948u));
    // 0x1e087c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e087cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0880: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1E0880u;
    SET_GPR_U32(ctx, 31, 0x1E0888u);
    ctx->pc = 0x1E0884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0880u;
    // 0x1e0884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1E0880u, 0x1E0888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0888u;
label_1e0888:
    // 0x1e0888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e088c: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x1e088cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x1e0890: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1E0890u;
    SET_GPR_U32(ctx, 31, 0x1E0898u);
    ctx->pc = 0x1E0894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0890u;
    // 0x1e0894: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1E0890u, 0x1E0898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0898u;
label_1e0898:
    // 0x1e0898: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1e0898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1e089c: 0xdc243950  ld          $a0, 0x3950($at)
    ctx->pc = 0x1e089cu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x223950u));
    // 0x1e08a0: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1E08A0u;
    SET_GPR_U32(ctx, 31, 0x1E08A8u);
    ctx->pc = 0x1E08A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E08A0u;
    // 0x1e08a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1E08A0u, 0x1E08A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E08A8u;
label_1e08a8:
    // 0x1e08a8: 0xde250038  ld          $a1, 0x38($s1)
    ctx->pc = 0x1e08a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1e08ac: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1E08ACu;
    SET_GPR_U32(ctx, 31, 0x1E08B4u);
    ctx->pc = 0x1E08B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E08ACu;
    // 0x1e08b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1E08ACu, 0x1E08B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E08B4u;
label_1e08b4:
    // 0x1e08b4: 0xc074c4c  jal         func_1D3130
    ctx->pc = 0x1E08B4u;
    SET_GPR_U32(ctx, 31, 0x1E08BCu);
    ctx->pc = 0x1E08B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E08B4u;
    // 0x1e08b8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3130u, 0x1E08B4u, 0x1E08BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E08BCu;
label_1e08bc:
    // 0x1e08bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e08bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e08c0: 0xc08218c  jal         func_208630
    ctx->pc = 0x1E08C0u;
    SET_GPR_U32(ctx, 31, 0x1E08C8u);
    ctx->pc = 0x1E08C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E08C0u;
    // 0x1e08c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1E08C0u, 0x1E08C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E08C8u;
label_1e08c8:
    // 0x1e08c8: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E08C8u;
    {
        const bool branch_taken_0x1e08c8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1e08c8) {
            ctx->pc = 0x1E08E0u;
            goto label_1e08e0;
        }
    }
    ctx->pc = 0x1E08D0u;
    // 0x1e08d0: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1e08d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1e08d4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1e08d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1e08d8: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1E08D8u;
    SET_GPR_U32(ctx, 31, 0x1E08E0u);
    ctx->pc = 0x1E08DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E08D8u;
    // 0x1e08dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1E08D8u, 0x1E08E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E08E0u;
label_1e08e0:
    // 0x1e08e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e08e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e08e4: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1E08E4u;
    SET_GPR_U32(ctx, 31, 0x1E08ECu);
    ctx->pc = 0x1E08E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E08E4u;
    // 0x1e08e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1E08E4u, 0x1E08ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E08ECu;
label_1e08ec:
    // 0x1e08ec: 0xde250078  ld          $a1, 0x78($s1)
    ctx->pc = 0x1e08ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1e08f0: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x1e08f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    // 0x1e08f4: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1E08F4u;
    SET_GPR_U32(ctx, 31, 0x1E08FCu);
    ctx->pc = 0x1E08F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E08F4u;
    // 0x1e08f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1E08F4u, 0x1E08FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E08FCu;
label_1e08fc:
    // 0x1e08fc: 0x340580b2  ori         $a1, $zero, 0x80B2
    ctx->pc = 0x1e08fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32946);
    // 0x1e0900: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1e0900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1e0904: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1E0904u;
    SET_GPR_U32(ctx, 31, 0x1E090Cu);
    ctx->pc = 0x1E0908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0904u;
    // 0x1e0908: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1E0904u, 0x1E090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E090Cu;
label_1e090c:
    // 0x1e090c: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x1e090cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    // 0x1e0910: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E0910u;
    {
        const bool branch_taken_0x1e0910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0910u;
        // 0x1e0914: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0910) {
            ctx->pc = 0x1E094Cu;
            goto label_1e094c;
        }
    }
    ctx->pc = 0x1E0918u;
label_1e0918:
    // 0x1e0918: 0x24c40005  addiu       $a0, $a2, 0x5
    ctx->pc = 0x1e0918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x1e091c: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x1e091cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1e0920: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1e0920u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1e0924: 0xae250020  sw          $a1, 0x20($s1)
    ctx->pc = 0x1e0924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 5));
    // 0x1e0928: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e0928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e092c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1e092cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1e0930: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x1e0930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e0934: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0934u;
    {
        const bool branch_taken_0x1e0934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0934u;
        // 0x1e0938: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0934) {
            ctx->pc = 0x1E0948u;
            goto label_1e0948;
        }
    }
    ctx->pc = 0x1E093Cu;
    // 0x1e093c: 0x0  nop
    ctx->pc = 0x1e093cu;
    // NOP
label_1e0940:
    // 0x1e0940: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1e0940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1e0944:
    // 0x1e0944: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x1e0944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_1e0948:
    // 0x1e0948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e094c:
    // 0x1e094c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e094cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e0950:
    // 0x1e0950: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e0950u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0954: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e0954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e0958: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0958u;
        // 0x1e095c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0960u;
}
