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

// Function: FUN_001a56b0
// Address: 0x1a56b0 - 0x1a5a58
void FUN_001a56b0_0x1a56b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a56b0_0x1a56b0");
#endif

    switch (ctx->pc) {
        case 0x1a56e4u: goto label_1a56e4;
        case 0x1a5780u: goto label_1a5780;
        case 0x1a57a0u: goto label_1a57a0;
        case 0x1a57e0u: goto label_1a57e0;
        case 0x1a5820u: goto label_1a5820;
        case 0x1a5854u: goto label_1a5854;
        case 0x1a5910u: goto label_1a5910;
        case 0x1a593cu: goto label_1a593c;
        case 0x1a5960u: goto label_1a5960;
        case 0x1a59e4u: goto label_1a59e4;
        case 0x1a59f4u: goto label_1a59f4;
        case 0x1a59f8u: goto label_1a59f8;
        case 0x1a5a18u: goto label_1a5a18;
        case 0x1a5a28u: goto label_1a5a28;
        default: break;
    }

    ctx->pc = 0x1a56b0u;

    // 0x1a56b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a56b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1a56b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a56b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a56b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a56b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a56bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a56bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a56c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a56c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a56c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a56c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a56c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a56c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a56cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a56ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a56d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a56d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a56d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a56d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a56d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a56d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a56dc: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1a56dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1a56e0: 0x24632b70  addiu       $v1, $v1, 0x2B70
    ctx->pc = 0x1a56e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11120));
label_1a56e4:
    // 0x1a56e4: 0x654821  addu        $t1, $v1, $a1
    ctx->pc = 0x1a56e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a56e8: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x1a56e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1a56ec: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x1a56ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a56f0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1a56f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1a56f4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1a56f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a56f8: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1a56f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1a56fc: 0x8cea0688  lw          $t2, 0x688($a3)
    ctx->pc = 0x1a56fcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1672)));
    // 0x1a5700: 0x11400013  beqz        $t2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A5700u;
    {
        const bool branch_taken_0x1a5700 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5700) {
            ctx->pc = 0x1A5750u;
            goto label_1a5750;
        }
    }
    ctx->pc = 0x1A5708u;
    // 0x1a5708: 0x8d280004  lw          $t0, 0x4($t1)
    ctx->pc = 0x1a5708u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1a570c: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x1a570cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a5710: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1a5710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1a5714: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1a5714u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a5718: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1a5718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1a571c: 0x8ce70688  lw          $a3, 0x688($a3)
    ctx->pc = 0x1a571cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1672)));
    // 0x1a5720: 0x1547000b  bne         $t2, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x1A5720u;
    {
        const bool branch_taken_0x1a5720 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        if (branch_taken_0x1a5720) {
            ctx->pc = 0x1A5750u;
            goto label_1a5750;
        }
    }
    ctx->pc = 0x1A5728u;
    // 0x1a5728: 0x8d280008  lw          $t0, 0x8($t1)
    ctx->pc = 0x1a5728u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1a572c: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x1a572cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a5730: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1a5730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1a5734: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1a5734u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a5738: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x1a5738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1a573c: 0x8ce70688  lw          $a3, 0x688($a3)
    ctx->pc = 0x1a573cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1672)));
    // 0x1a5740: 0x15470003  bne         $t2, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5740u;
    {
        const bool branch_taken_0x1a5740 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        ctx->pc = 0x1A5744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5740u;
        // 0x1a5744: 0xdd3821  addu        $a3, $a2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5740) {
            ctx->pc = 0x1A5750u;
            goto label_1a5750;
        }
    }
    ctx->pc = 0x1A5748u;
    // 0x1a5748: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5748u;
    {
        const bool branch_taken_0x1a5748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5748u;
        // 0x1a574c: 0xacea0060  sw          $t2, 0x60($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5748) {
            ctx->pc = 0x1A5758u;
            goto label_1a5758;
        }
    }
    ctx->pc = 0x1A5750u;
label_1a5750:
    // 0x1a5750: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x1a5750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x1a5754: 0xace00060  sw          $zero, 0x60($a3)
    ctx->pc = 0x1a5754u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 0));
label_1a5758:
    // 0x1a5758: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a5758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a575c: 0x28870008  slti        $a3, $a0, 0x8
    ctx->pc = 0x1a575cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1a5760: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x1a5760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x1a5764: 0x14e0ffdf  bnez        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1A5764u;
    {
        const bool branch_taken_0x1a5764 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5764u;
        // 0x1a5768: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5764) {
            ctx->pc = 0x1A56E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a56e4;
        }
    }
    ctx->pc = 0x1A576Cu;
    // 0x1a576c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x1a576cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x1a5770: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a5770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5774: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x1a5774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x1a5778: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a5778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a577c: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x1a577cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
label_1a5780:
    // 0x1a5780: 0xfd1821  addu        $v1, $a3, $sp
    ctx->pc = 0x1a5780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x1a5784: 0x8c680060  lw          $t0, 0x60($v1)
    ctx->pc = 0x1a5784u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1a5788: 0x1100000f  beqz        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A5788u;
    {
        const bool branch_taken_0x1a5788 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5788u;
        // 0x1a578c: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5788) {
            ctx->pc = 0x1A57C8u;
            goto label_1a57c8;
        }
    }
    ctx->pc = 0x1A5790u;
    // 0x1a5790: 0x8c630760  lw          $v1, 0x760($v1)
    ctx->pc = 0x1a5790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1888)));
    // 0x1a5794: 0x1068000c  beq         $v1, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A5794u;
    {
        const bool branch_taken_0x1a5794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x1A5798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5794u;
        // 0x1a5798: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5794) {
            ctx->pc = 0x1A57C8u;
            goto label_1a57c8;
        }
    }
    ctx->pc = 0x1A579Cu;
    // 0x1a579c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a579cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a57a0:
    // 0x1a57a0: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x1a57a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1a57a4: 0x24690760  addiu       $t1, $v1, 0x760
    ctx->pc = 0x1a57a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1888));
    // 0x1a57a8: 0x8c630760  lw          $v1, 0x760($v1)
    ctx->pc = 0x1a57a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1888)));
    // 0x1a57ac: 0x14680002  bne         $v1, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A57ACu;
    {
        const bool branch_taken_0x1a57ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x1a57ac) {
            ctx->pc = 0x1A57B8u;
            goto label_1a57b8;
        }
    }
    ctx->pc = 0x1A57B4u;
    // 0x1a57b4: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1a57b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
label_1a57b8:
    // 0x1a57b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a57b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a57bc: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x1a57bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1a57c0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A57C0u;
    {
        const bool branch_taken_0x1a57c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A57C0u;
        // 0x1a57c4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a57c0) {
            ctx->pc = 0x1A57A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a57a0;
        }
    }
    ctx->pc = 0x1A57C8u;
label_1a57c8:
    // 0x1a57c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a57c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a57cc: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x1a57ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1a57d0: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1A57D0u;
    {
        const bool branch_taken_0x1a57d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A57D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A57D0u;
        // 0x1a57d4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a57d0) {
            ctx->pc = 0x1A5780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5780;
        }
    }
    ctx->pc = 0x1A57D8u;
    // 0x1a57d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a57d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a57dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a57dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a57e0:
    // 0x1a57e0: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x1a57e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1a57e4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1a57e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1a57e8: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x1a57e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1a57ec: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1a57ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1a57f0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1a57f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1a57f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1a57f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1a57f8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1a57f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1a57fc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1a57fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1a5800: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1a5800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1a5804: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1a5804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1a5808: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1a5808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x1a580c: 0x1880fff4  blez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1A580Cu;
    {
        const bool branch_taken_0x1a580c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A5810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A580Cu;
        // 0x1a5810: 0xac60001c  sw          $zero, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a580c) {
            ctx->pc = 0x1A57E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a57e0;
        }
    }
    ctx->pc = 0x1A5814u;
    // 0x1a5814: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x1a5814u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a5818: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5818u;
    {
        const bool branch_taken_0x1a5818 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5818u;
        // 0x1a581c: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5818) {
            ctx->pc = 0x1A583Cu;
            goto label_1a583c;
        }
    }
    ctx->pc = 0x1A5820u;
label_1a5820:
    // 0x1a5820: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x1a5820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1a5824: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a5824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a5828: 0xac600080  sw          $zero, 0x80($v1)
    ctx->pc = 0x1a5828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 0));
    // 0x1a582c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1a582cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1a5830: 0x28830009  slti        $v1, $a0, 0x9
    ctx->pc = 0x1a5830u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a5834: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A5834u;
    {
        const bool branch_taken_0x1a5834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5834) {
            ctx->pc = 0x1A5820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5820;
        }
    }
    ctx->pc = 0x1A583Cu;
label_1a583c:
    // 0x1a583c: 0x0  nop
    ctx->pc = 0x1a583cu;
    // NOP
    // 0x1a5840: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a5840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5844: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a5844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5848: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a5848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a584c: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1a584cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1a5850: 0x24632b70  addiu       $v1, $v1, 0x2B70
    ctx->pc = 0x1a5850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11120));
label_1a5854:
    // 0x1a5854: 0xbd3821  addu        $a3, $a1, $sp
    ctx->pc = 0x1a5854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1a5858: 0x8ce70060  lw          $a3, 0x60($a3)
    ctx->pc = 0x1a5858u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x1a585c: 0x10e00022  beqz        $a3, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A585Cu;
    {
        const bool branch_taken_0x1a585c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A585Cu;
        // 0x1a5860: 0x2054021  addu        $t0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a585c) {
            ctx->pc = 0x1A58E8u;
            goto label_1a58e8;
        }
    }
    ctx->pc = 0x1A5864u;
    // 0x1a5864: 0x8d080760  lw          $t0, 0x760($t0)
    ctx->pc = 0x1a5864u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1888)));
    // 0x1a5868: 0x1107001f  beq         $t0, $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A5868u;
    {
        const bool branch_taken_0x1a5868 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        ctx->pc = 0x1A586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5868u;
        // 0x1a586c: 0x74880  sll         $t1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5868) {
            ctx->pc = 0x1A58E8u;
            goto label_1a58e8;
        }
    }
    ctx->pc = 0x1A5870u;
    // 0x1a5870: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x1a5870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a5874: 0x13d5821  addu        $t3, $t1, $sp
    ctx->pc = 0x1a5874u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x1a5878: 0x8d6a00ac  lw          $t2, 0xAC($t3)
    ctx->pc = 0x1a5878u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 172)));
    // 0x1a587c: 0x1004821  addu        $t1, $t0, $zero
    ctx->pc = 0x1a587cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 0)));
    // 0x1a5880: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1a5880u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1a5884: 0xad6a00ac  sw          $t2, 0xAC($t3)
    ctx->pc = 0x1a5884u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 172), GPR_U32(ctx, 10));
    // 0x1a5888: 0x8d2a0000  lw          $t2, 0x0($t1)
    ctx->pc = 0x1a5888u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1a588c: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x1a588cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1a5890: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x1a5890u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1a5894: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1a5894u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1a5898: 0x13d4821  addu        $t1, $t1, $sp
    ctx->pc = 0x1a5898u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x1a589c: 0x20a5021  addu        $t2, $s0, $t2
    ctx->pc = 0x1a589cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1a58a0: 0x8d4a0688  lw          $t2, 0x688($t2)
    ctx->pc = 0x1a58a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 1672)));
    // 0x1a58a4: 0xad2a0080  sw          $t2, 0x80($t1)
    ctx->pc = 0x1a58a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 128), GPR_U32(ctx, 10));
    // 0x1a58a8: 0x8d0a0004  lw          $t2, 0x4($t0)
    ctx->pc = 0x1a58a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1a58ac: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x1a58acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1a58b0: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x1a58b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1a58b4: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1a58b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1a58b8: 0x13d4821  addu        $t1, $t1, $sp
    ctx->pc = 0x1a58b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x1a58bc: 0x20a5021  addu        $t2, $s0, $t2
    ctx->pc = 0x1a58bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1a58c0: 0x8d4a0688  lw          $t2, 0x688($t2)
    ctx->pc = 0x1a58c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 1672)));
    // 0x1a58c4: 0xad2a0080  sw          $t2, 0x80($t1)
    ctx->pc = 0x1a58c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 128), GPR_U32(ctx, 10));
    // 0x1a58c8: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x1a58c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1a58cc: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x1a58ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1a58d0: 0x1094821  addu        $t1, $t0, $t1
    ctx->pc = 0x1a58d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1a58d4: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1a58d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1a58d8: 0x11d4021  addu        $t0, $t0, $sp
    ctx->pc = 0x1a58d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x1a58dc: 0x2094821  addu        $t1, $s0, $t1
    ctx->pc = 0x1a58dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x1a58e0: 0x8d290688  lw          $t1, 0x688($t1)
    ctx->pc = 0x1a58e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1672)));
    // 0x1a58e4: 0xad090080  sw          $t1, 0x80($t0)
    ctx->pc = 0x1a58e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 9));
label_1a58e8:
    // 0x1a58e8: 0x2054021  addu        $t0, $s0, $a1
    ctx->pc = 0x1a58e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1a58ec: 0xad070760  sw          $a3, 0x760($t0)
    ctx->pc = 0x1a58ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1888), GPR_U32(ctx, 7));
    // 0x1a58f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a58f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a58f4: 0x28870008  slti        $a3, $a0, 0x8
    ctx->pc = 0x1a58f4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1a58f8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1a58f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1a58fc: 0x14e0ffd5  bnez        $a3, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1A58FCu;
    {
        const bool branch_taken_0x1a58fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58FCu;
        // 0x1a5900: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a58fc) {
            ctx->pc = 0x1A5854u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5854;
        }
    }
    ctx->pc = 0x1A5904u;
    // 0x1a5904: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a5904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5908: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a5908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a590c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a590cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5910:
    // 0x1a5910: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x1a5910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1a5914: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x1a5914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x1a5918: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A5918u;
    {
        const bool branch_taken_0x1a5918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5918u;
        // 0x1a591c: 0x2132021  addu        $a0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5918) {
            ctx->pc = 0x1A593Cu;
            goto label_1a593c;
        }
    }
    ctx->pc = 0x1A5920u;
    // 0x1a5920: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a5920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a5924: 0x8c830684  lw          $v1, 0x684($a0)
    ctx->pc = 0x1a5924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1668)));
    // 0x1a5928: 0x8c850688  lw          $a1, 0x688($a0)
    ctx->pc = 0x1a5928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1672)));
    // 0x1a592c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a592cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a5930: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5934: 0xc05ee80  jal         func_17BA00
    ctx->pc = 0x1A5934u;
    SET_GPR_U32(ctx, 31, 0x1A593Cu);
    ctx->pc = 0x1A5938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5934u;
    // 0x1a5938: 0x8c442cd8  lw          $a0, 0x2CD8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BA00u, 0x1A5934u, 0x1A593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A593Cu;
label_1a593c:
    // 0x1a593c: 0x0  nop
    ctx->pc = 0x1a593cu;
    // NOP
    // 0x1a5940: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a5940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a5944: 0x2a230009  slti        $v1, $s1, 0x9
    ctx->pc = 0x1a5944u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a5948: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1a5948u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1a594c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1A594Cu;
    {
        const bool branch_taken_0x1a594c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A594Cu;
        // 0x1a5950: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a594c) {
            ctx->pc = 0x1A5910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5910;
        }
    }
    ctx->pc = 0x1A5954u;
    // 0x1a5954: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a5954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5958: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a5958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a595c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a595cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5960:
    // 0x1a5960: 0x29d1821  addu        $v1, $s4, $sp
    ctx->pc = 0x1a5960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x1a5964: 0x8c6500b0  lw          $a1, 0xB0($v1)
    ctx->pc = 0x1a5964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x1a5968: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x1a5968u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a596c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A596Cu;
    {
        const bool branch_taken_0x1a596c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A596Cu;
        // 0x1a5970: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a596c) {
            ctx->pc = 0x1A59C4u;
            goto label_1a59c4;
        }
    }
    ctx->pc = 0x1A5974u;
    // 0x1a5974: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1a5974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1a5978: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a5978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a597c: 0x24840530  addiu       $a0, $a0, 0x530
    ctx->pc = 0x1a597cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1328));
    // 0x1a5980: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a5980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a5984: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a5984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a5988: 0x600008  jr          $v1
    ctx->pc = 0x1A5988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5990u: goto label_1a5990;
            case 0x1A5998u: goto label_1a5998;
            case 0x1A59A0u: goto label_1a59a0;
            case 0x1A59A8u: goto label_1a59a8;
            case 0x1A59B0u: goto label_1a59b0;
            case 0x1A59B8u: goto label_1a59b8;
            case 0x1A59C0u: goto label_1a59c0;
            case 0x1A59C4u: goto label_1a59c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5988u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A5990u;
label_1a5990:
    // 0x1a5990: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A5990u;
    {
        const bool branch_taken_0x1a5990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5990) {
            ctx->pc = 0x1A59C4u;
            goto label_1a59c4;
        }
    }
    ctx->pc = 0x1A5998u;
label_1a5998:
    // 0x1a5998: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A5998u;
    {
        const bool branch_taken_0x1a5998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5998u;
        // 0x1a599c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5998) {
            ctx->pc = 0x1A59C4u;
            goto label_1a59c4;
        }
    }
    ctx->pc = 0x1A59A0u;
label_1a59a0:
    // 0x1a59a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A59A0u;
    {
        const bool branch_taken_0x1a59a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A59A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59A0u;
        // 0x1a59a4: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a59a0) {
            ctx->pc = 0x1A59C4u;
            goto label_1a59c4;
        }
    }
    ctx->pc = 0x1A59A8u;
label_1a59a8:
    // 0x1a59a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A59A8u;
    {
        const bool branch_taken_0x1a59a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A59ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59A8u;
        // 0x1a59ac: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a59a8) {
            ctx->pc = 0x1A59C4u;
            goto label_1a59c4;
        }
    }
    ctx->pc = 0x1A59B0u;
label_1a59b0:
    // 0x1a59b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A59B0u;
    {
        const bool branch_taken_0x1a59b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A59B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59B0u;
        // 0x1a59b4: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a59b0) {
            ctx->pc = 0x1A59C4u;
            goto label_1a59c4;
        }
    }
    ctx->pc = 0x1A59B8u;
label_1a59b8:
    // 0x1a59b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A59B8u;
    {
        const bool branch_taken_0x1a59b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A59BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59B8u;
        // 0x1a59bc: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a59b8) {
            ctx->pc = 0x1A59C4u;
            goto label_1a59c4;
        }
    }
    ctx->pc = 0x1A59C0u;
label_1a59c0:
    // 0x1a59c0: 0x24130006  addiu       $s3, $zero, 0x6
    ctx->pc = 0x1a59c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a59c4:
    // 0x1a59c4: 0x0  nop
    ctx->pc = 0x1a59c4u;
    // NOP
    // 0x1a59c8: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A59C8u;
    {
        const bool branch_taken_0x1a59c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a59c8) {
            ctx->pc = 0x1A5A28u;
            goto label_1a5a28;
        }
    }
    ctx->pc = 0x1A59D0u;
    // 0x1a59d0: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x1a59d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1a59d4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A59D4u;
    {
        const bool branch_taken_0x1a59d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a59d4) {
            ctx->pc = 0x1A59F8u;
            goto label_1a59f8;
        }
    }
    ctx->pc = 0x1A59DCu;
    // 0x1a59dc: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1A59DCu;
    SET_GPR_U32(ctx, 31, 0x1A59E4u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A59DCu, 0x1A59E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A59E4u;
label_1a59e4:
    // 0x1a59e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a59e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a59e8: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x1a59e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1a59ec: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1A59ECu;
    SET_GPR_U32(ctx, 31, 0x1A59F4u);
    ctx->pc = 0x1A59F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A59ECu;
    // 0x1a59f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A59ECu, 0x1A59F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A59F4u;
label_1a59f4:
    // 0x1a59f4: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x1a59f4u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1a59f8:
    // 0x1a59f8: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x1a59f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1a59fc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a59fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a5a00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a5a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5a04: 0x8c470788  lw          $a3, 0x788($v0)
    ctx->pc = 0x1a5a04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x1a5a08: 0x24530788  addiu       $s3, $v0, 0x788
    ctx->pc = 0x1a5a08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1928));
    // 0x1a5a0c: 0x8e040a60  lw          $a0, 0xA60($s0)
    ctx->pc = 0x1a5a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2656)));
    // 0x1a5a10: 0xc06ccd8  jal         func_1B3360
    ctx->pc = 0x1A5A10u;
    SET_GPR_U32(ctx, 31, 0x1A5A18u);
    ctx->pc = 0x1A5A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A10u;
    // 0x1a5a14: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3360u, 0x1A5A10u, 0x1A5A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5A18u;
label_1a5a18:
    // 0x1a5a18: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x1a5a18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a5a1c: 0xde040780  ld          $a0, 0x780($s0)
    ctx->pc = 0x1a5a1cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 1920)));
    // 0x1a5a20: 0x83182d  daddu       $v1, $a0, $v1
    ctx->pc = 0x1a5a20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1a5a24: 0xfe030780  sd          $v1, 0x780($s0)
    ctx->pc = 0x1a5a24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1920), GPR_U64(ctx, 3));
label_1a5a28:
    // 0x1a5a28: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a5a28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a5a2c: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x1a5a2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a5a30: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1A5A30u;
    {
        const bool branch_taken_0x1a5a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A30u;
        // 0x1a5a34: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a30) {
            ctx->pc = 0x1A5960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5960;
        }
    }
    ctx->pc = 0x1A5A38u;
    // 0x1a5a38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a5a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5a3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a5a3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a5a40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a5a40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5a44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a5a44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5a48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a5a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5a4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5a50: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A50u;
        // 0x1a5a54: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5A58u;
}
