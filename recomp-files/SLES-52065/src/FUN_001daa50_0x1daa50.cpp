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

// Function: FUN_001daa50
// Address: 0x1daa50 - 0x1dae44
void FUN_001daa50_0x1daa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001daa50_0x1daa50");
#endif

    switch (ctx->pc) {
        case 0x1daac8u: goto label_1daac8;
        case 0x1dad90u: goto label_1dad90;
        case 0x1dadd8u: goto label_1dadd8;
        case 0x1dae10u: goto label_1dae10;
        default: break;
    }

    ctx->pc = 0x1daa50u;

    // 0x1daa50: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1daa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1daa54: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1daa54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1daa58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1daa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1daa5c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x1daa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x1daa60: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x1daa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x1daa64: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x1daa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x1daa68: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x1daa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x1daa6c: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x1daa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x1daa70: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x1daa70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x1daa74: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x1daa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x1daa78: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x1daa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x1daa7c: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1daa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1daa80: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x1daa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x1daa84: 0x108200be  beq         $a0, $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x1DAA84u;
    {
        const bool branch_taken_0x1daa84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DAA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA84u;
        // 0x1daa88: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daa84) {
            ctx->pc = 0x1DAD80u;
            goto label_1dad80;
        }
    }
    ctx->pc = 0x1DAA8Cu;
    // 0x1daa8c: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1daa8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1daa90: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DAA90u;
    {
        const bool branch_taken_0x1daa90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daa90) {
            ctx->pc = 0x1DAA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAA90u;
            // 0x1daa94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAAA8u;
            goto label_1daaa8;
        }
    }
    ctx->pc = 0x1DAA98u;
    // 0x1daa98: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DAA98u;
    {
        const bool branch_taken_0x1daa98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daa98) {
            ctx->pc = 0x1DAA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAA98u;
            // 0x1daa9c: 0x24100017  addiu       $s0, $zero, 0x17 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAAC0u;
            goto label_1daac0;
        }
    }
    ctx->pc = 0x1DAAA0u;
    // 0x1daaa0: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x1DAAA0u;
    {
        const bool branch_taken_0x1daaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daaa0) {
            ctx->pc = 0x1DAD88u;
            goto label_1dad88;
        }
    }
    ctx->pc = 0x1DAAA8u;
label_1daaa8:
    // 0x1daaa8: 0x148200b7  bne         $a0, $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x1DAAA8u;
    {
        const bool branch_taken_0x1daaa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1daaa8) {
            ctx->pc = 0x1DAD88u;
            goto label_1dad88;
        }
    }
    ctx->pc = 0x1DAAB0u;
    // 0x1daab0: 0x2410002f  addiu       $s0, $zero, 0x2F
    ctx->pc = 0x1daab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1daab4: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x1DAAB4u;
    {
        const bool branch_taken_0x1daab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAAB4u;
        // 0x1daab8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daab4) {
            ctx->pc = 0x1DAD88u;
            goto label_1dad88;
        }
    }
    ctx->pc = 0x1DAABCu;
    // 0x1daabc: 0x0  nop
    ctx->pc = 0x1daabcu;
    // NOP
label_1daac0:
    // 0x1daac0: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x1DAAC0u;
    {
        const bool branch_taken_0x1daac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAAC0u;
        // 0x1daac4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daac0) {
            ctx->pc = 0x1DAD88u;
            goto label_1dad88;
        }
    }
    ctx->pc = 0x1DAAC8u;
label_1daac8:
    // 0x1daac8: 0x3c0c0038  lui         $t4, 0x38
    ctx->pc = 0x1daac8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)56 << 16));
    // 0x1daacc: 0x27c700b0  addiu       $a3, $fp, 0xB0
    ctx->pc = 0x1daaccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 176));
    // 0x1daad0: 0x258c7344  addiu       $t4, $t4, 0x7344
    ctx->pc = 0x1daad0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 29508));
    // 0x1daad4: 0x2502000c  addiu       $v0, $t0, 0xC
    ctx->pc = 0x1daad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x1daad8: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x1daad8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x1daadc: 0x27ce0010  addiu       $t6, $fp, 0x10
    ctx->pc = 0x1daadcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x1daae0: 0xafac005c  sw          $t4, 0x5C($sp)
    ctx->pc = 0x1daae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 12));
    // 0x1daae4: 0x3c26021  addu        $t4, $fp, $v0
    ctx->pc = 0x1daae4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1daae8: 0xafac0060  sw          $t4, 0x60($sp)
    ctx->pc = 0x1daae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 12));
    // 0x1daaec: 0x1d76021  addu        $t4, $t6, $s7
    ctx->pc = 0x1daaecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 23)));
    // 0x1daaf0: 0x27c90040  addiu       $t1, $fp, 0x40
    ctx->pc = 0x1daaf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    // 0x1daaf4: 0xafac0064  sw          $t4, 0x64($sp)
    ctx->pc = 0x1daaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 12));
    // 0x1daaf8: 0x27cf0030  addiu       $t7, $fp, 0x30
    ctx->pc = 0x1daaf8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
    // 0x1daafc: 0x1226021  addu        $t4, $t1, $v0
    ctx->pc = 0x1daafcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1dab00: 0xafac0020  sw          $t4, 0x20($sp)
    ctx->pc = 0x1dab00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 12));
    // 0x1dab04: 0x1e86021  addu        $t4, $t7, $t0
    ctx->pc = 0x1dab04u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x1dab08: 0x27cd0050  addiu       $t5, $fp, 0x50
    ctx->pc = 0x1dab08u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x1dab0c: 0xafac0028  sw          $t4, 0x28($sp)
    ctx->pc = 0x1dab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 12));
    // 0x1dab10: 0x27ca0080  addiu       $t2, $fp, 0x80
    ctx->pc = 0x1dab10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
    // 0x1dab14: 0x1a26021  addu        $t4, $t5, $v0
    ctx->pc = 0x1dab14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1dab18: 0xafac002c  sw          $t4, 0x2C($sp)
    ctx->pc = 0x1dab18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 12));
    // 0x1dab1c: 0x1486021  addu        $t4, $t2, $t0
    ctx->pc = 0x1dab1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x1dab20: 0x27cb00a0  addiu       $t3, $fp, 0xA0
    ctx->pc = 0x1dab20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 30), 160));
    // 0x1dab24: 0x25040008  addiu       $a0, $t0, 0x8
    ctx->pc = 0x1dab24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1dab28: 0xafac0034  sw          $t4, 0x34($sp)
    ctx->pc = 0x1dab28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 12));
    // 0x1dab2c: 0x1626021  addu        $t4, $t3, $v0
    ctx->pc = 0x1dab2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1dab30: 0x27c50090  addiu       $a1, $fp, 0x90
    ctx->pc = 0x1dab30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x1dab34: 0xafac003c  sw          $t4, 0x3C($sp)
    ctx->pc = 0x1dab34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 12));
    // 0x1dab38: 0x27d30060  addiu       $s3, $fp, 0x60
    ctx->pc = 0x1dab38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
    // 0x1dab3c: 0xa46021  addu        $t4, $a1, $a0
    ctx->pc = 0x1dab3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1dab40: 0xafac0040  sw          $t4, 0x40($sp)
    ctx->pc = 0x1dab40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 12));
    // 0x1dab44: 0x2626021  addu        $t4, $s3, $v0
    ctx->pc = 0x1dab44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1dab48: 0x27d10070  addiu       $s1, $fp, 0x70
    ctx->pc = 0x1dab48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
    // 0x1dab4c: 0xafac0044  sw          $t4, 0x44($sp)
    ctx->pc = 0x1dab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 12));
    // 0x1dab50: 0x27d000d0  addiu       $s0, $fp, 0xD0
    ctx->pc = 0x1dab50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 208));
    // 0x1dab54: 0x25030010  addiu       $v1, $t0, 0x10
    ctx->pc = 0x1dab54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1dab58: 0x2286021  addu        $t4, $s1, $t0
    ctx->pc = 0x1dab58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x1dab5c: 0x3c8a021  addu        $s4, $fp, $t0
    ctx->pc = 0x1dab5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x1dab60: 0xafac0048  sw          $t4, 0x48($sp)
    ctx->pc = 0x1dab60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 12));
    // 0x1dab64: 0x2036021  addu        $t4, $s0, $v1
    ctx->pc = 0x1dab64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1dab68: 0xafac0050  sw          $t4, 0x50($sp)
    ctx->pc = 0x1dab68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 12));
    // 0x1dab6c: 0x3c86021  addu        $t4, $fp, $t0
    ctx->pc = 0x1dab6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x1dab70: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x1dab70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x1dab74: 0x1c46021  addu        $t4, $t6, $a0
    ctx->pc = 0x1dab74u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x1dab78: 0xafac000c  sw          $t4, 0xC($sp)
    ctx->pc = 0x1dab78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 12));
    // 0x1dab7c: 0xa26021  addu        $t4, $a1, $v0
    ctx->pc = 0x1dab7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1dab80: 0xafac0038  sw          $t4, 0x38($sp)
    ctx->pc = 0x1dab80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 12));
    // 0x1dab84: 0x1e46021  addu        $t4, $t7, $a0
    ctx->pc = 0x1dab84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x1dab88: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x1dab88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x1dab8c: 0x1e26021  addu        $t4, $t7, $v0
    ctx->pc = 0x1dab8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x1dab90: 0xafac0014  sw          $t4, 0x14($sp)
    ctx->pc = 0x1dab90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 12));
    // 0x1dab94: 0x1376021  addu        $t4, $t1, $s7
    ctx->pc = 0x1dab94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 23)));
    // 0x1dab98: 0xafac0018  sw          $t4, 0x18($sp)
    ctx->pc = 0x1dab98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 12));
    // 0x1dab9c: 0x1a86021  addu        $t4, $t5, $t0
    ctx->pc = 0x1dab9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x1daba0: 0x128a821  addu        $s5, $t1, $t0
    ctx->pc = 0x1daba0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1daba4: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1daba4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1daba8: 0x2689821  addu        $s3, $s3, $t0
    ctx->pc = 0x1daba8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x1dabac: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x1dabacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1dabb0: 0xafa80070  sw          $t0, 0x70($sp)
    ctx->pc = 0x1dabb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 8));
    // 0x1dabb4: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x1dabb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x1dabb8: 0xafac001c  sw          $t4, 0x1C($sp)
    ctx->pc = 0x1dabb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 12));
    // 0x1dabbc: 0x2376021  addu        $t4, $s1, $s7
    ctx->pc = 0x1dabbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x1dabc0: 0x3c4b021  addu        $s6, $fp, $a0
    ctx->pc = 0x1dabc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x1dabc4: 0xafac0024  sw          $t4, 0x24($sp)
    ctx->pc = 0x1dabc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 12));
    // 0x1dabc8: 0x25087344  addiu       $t0, $t0, 0x7344
    ctx->pc = 0x1dabc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 29508));
    // 0x1dabcc: 0x2c0602d  daddu       $t4, $s6, $zero
    ctx->pc = 0x1dabccu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dabd0: 0xafac0030  sw          $t4, 0x30($sp)
    ctx->pc = 0x1dabd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 12));
    // 0x1dabd4: 0xb76021  addu        $t4, $a1, $s7
    ctx->pc = 0x1dabd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x1dabd8: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x1dabd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1dabdc: 0x2174021  addu        $t0, $s0, $s7
    ctx->pc = 0x1dabdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x1dabe0: 0xafa8004c  sw          $t0, 0x4C($sp)
    ctx->pc = 0x1dabe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 8));
    // 0x1dabe4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1dabe4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1dabe8: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x1dabe8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dabec: 0x24c6a000  addiu       $a2, $a2, -0x6000
    ctx->pc = 0x1dabecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942720));
    // 0x1dabf0: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x1dabf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1dabf4: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x1dabf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1dabf8: 0xafa70054  sw          $a3, 0x54($sp)
    ctx->pc = 0x1dabf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 7));
    // 0x1dabfc: 0x2407007f  addiu       $a3, $zero, 0x7F
    ctx->pc = 0x1dabfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1dac00: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1dac00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x1dac04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1dac04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dac08: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x1dac08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x1dac0c: 0x3c080022  lui         $t0, 0x22
    ctx->pc = 0x1dac0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34 << 16));
    // 0x1dac10: 0x2508a03c  addiu       $t0, $t0, -0x5FC4
    ctx->pc = 0x1dac10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942780));
    // 0x1dac14: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x1dac14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1dac18: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x1dac18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x1dac1c: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x1dac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x1dac20: 0xafb90000  sw          $t9, 0x0($sp)
    ctx->pc = 0x1dac20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 25));
    // 0x1dac24: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x1dac24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1dac28: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x1dac28u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    // 0x1dac2c: 0x1b79021  addu        $s2, $t5, $s7
    ctx->pc = 0x1dac2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 23)));
    // 0x1dac30: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x1dac30u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x1dac34: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x1dac34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x1dac38: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1dac38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1dac3c: 0x1f77821  addu        $t7, $t7, $s7
    ctx->pc = 0x1dac3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 23)));
    // 0x1dac40: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x1dac40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1dac44: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1dac44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1dac48: 0x8fac003c  lw          $t4, 0x3C($sp)
    ctx->pc = 0x1dac48u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1dac4c: 0x3d7f021  addu        $fp, $fp, $s7
    ctx->pc = 0x1dac4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x1dac50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dac50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dac54: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1dac54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1dac58: 0xad880000  sw          $t0, 0x0($t4)
    ctx->pc = 0x1dac58u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 8));
    // 0x1dac5c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1dac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dac60: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1dac60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dac64: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dac64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dac68: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1dac68u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1dac6c: 0xaf000000  sw          $zero, 0x0($t8)
    ctx->pc = 0x1dac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 0));
    // 0x1dac70: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x1dac70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
    // 0x1dac74: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x1dac74u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x1dac78: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x1dac78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1dac7c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1dac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1dac80: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dac80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1dac84: 0xaea70000  sw          $a3, 0x0($s5)
    ctx->pc = 0x1dac84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 7));
    // 0x1dac88: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x1dac88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1dac8c: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x1dac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x1dac90: 0x8fac0010  lw          $t4, 0x10($sp)
    ctx->pc = 0x1dac90u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dac94: 0xad870000  sw          $a3, 0x0($t4)
    ctx->pc = 0x1dac94u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
    // 0x1dac98: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x1dac98u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x1dac9c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1dac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1daca0: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x1daca0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x1daca4: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x1daca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x1daca8: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x1daca8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1dacac: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x1dacacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x1dacb0: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x1dacb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1dacb4: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x1dacb4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x1dacb8: 0x8fac0020  lw          $t4, 0x20($sp)
    ctx->pc = 0x1dacb8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dacbc: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x1dacbcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x1dacc0: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1dacc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1dacc4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1dacc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1dacc8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1dacc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1daccc: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x1dacccu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x1dacd0: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x1dacd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dacd4: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1dacd4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1dacd8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1dacd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dacdc: 0x8fac002c  lw          $t4, 0x2C($sp)
    ctx->pc = 0x1dacdcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1dace0: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x1dace0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x1dace4: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x1dace4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x1dace8: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1dace8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dacec: 0xacc80074  sw          $t0, 0x74($a2)
    ctx->pc = 0x1dacecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 8));
    // 0x1dacf0: 0xae280000  sw          $t0, 0x0($s1)
    ctx->pc = 0x1dacf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 8));
    // 0x1dacf4: 0x8fac0038  lw          $t4, 0x38($sp)
    ctx->pc = 0x1dacf4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dacf8: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x1dacf8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x1dacfc: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x1dacfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1dad00: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dad00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dad04: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x1dad04u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x1dad08: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1dad08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dad0c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1dad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1dad10: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1dad10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1dad14: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1dad14u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1dad18: 0x8fac0044  lw          $t4, 0x44($sp)
    ctx->pc = 0x1dad18u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1dad1c: 0xe7c000e0  swc1        $f0, 0xE0($fp)
    ctx->pc = 0x1dad1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 224), bits); }
    // 0x1dad20: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x1dad20u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x1dad24: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1dad24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1dad28: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1dad28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1dad2c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1dad2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dad30: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1dad30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1dad34: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1dad34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1dad38: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1dad38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1dad3c: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x1dad3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1dad40: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1dad40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1dad44: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x1dad44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dad48: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1dad48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1dad4c: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x1dad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    // 0x1dad50: 0x8fac0058  lw          $t4, 0x58($sp)
    ctx->pc = 0x1dad50u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1dad54: 0xe58000c0  swc1        $f0, 0xC0($t4)
    ctx->pc = 0x1dad54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 192), bits); }
    // 0x1dad58: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1dad58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1dad5c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1dad5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1dad60: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x1dad60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1dad64: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1dad64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1dad68: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x1dad68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1dad6c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1dad6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1dad70: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x1dad70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dad74: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1DAD74u;
    {
        const bool branch_taken_0x1dad74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD74u;
        // 0x1dad78: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad74) {
            ctx->pc = 0x1DADFCu;
            goto label_1dadfc;
        }
    }
    ctx->pc = 0x1DAD7Cu;
    // 0x1dad7c: 0x0  nop
    ctx->pc = 0x1dad7cu;
    // NOP
label_1dad80:
    // 0x1dad80: 0x2410002f  addiu       $s0, $zero, 0x2F
    ctx->pc = 0x1dad80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1dad84: 0x24110018  addiu       $s1, $zero, 0x18
    ctx->pc = 0x1dad84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1dad88:
    // 0x1dad88: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1DAD88u;
    SET_GPR_U32(ctx, 31, 0x1DAD90u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DAD88u, 0x1DAD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAD90u;
label_1dad90:
    // 0x1dad90: 0x200c82d  daddu       $t9, $s0, $zero
    ctx->pc = 0x1dad90u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad94: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1dad94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1dad98: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1dad98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1dad9c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DAD9Cu;
    {
        const bool branch_taken_0x1dad9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD9Cu;
        // 0x1dada0: 0x8fa80004  lw          $t0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad9c) {
            ctx->pc = 0x1DAE00u;
            goto label_1dae00;
        }
    }
    ctx->pc = 0x1DADA4u;
    // 0x1dada4: 0x1910c0  sll         $v0, $t9, 3
    ctx->pc = 0x1dada4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
    // 0x1dada8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dada8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dadac: 0x591023  subu        $v0, $v0, $t9
    ctx->pc = 0x1dadacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x1dadb0: 0x24687330  addiu       $t0, $v1, 0x7330
    ctx->pc = 0x1dadb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1dadb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dadb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dadb8: 0x25170004  addiu       $s7, $t0, 0x4
    ctx->pc = 0x1dadb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1dadbc: 0x591021  addu        $v0, $v0, $t9
    ctx->pc = 0x1dadbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x1dadc0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dadc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dadc4: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x1dadc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1dadc8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1dadc8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dadcc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1dadccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1dadd0: 0x60c02d  daddu       $t8, $v1, $zero
    ctx->pc = 0x1dadd0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dadd4: 0x0  nop
    ctx->pc = 0x1dadd4u;
    // NOP
label_1dadd8:
    // 0x1dadd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dadd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1daddc: 0x1040ff3a  beqz        $v0, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x1DADDCu;
    {
        const bool branch_taken_0x1daddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADDCu;
        // 0x1dade0: 0x2463ff18  addiu       $v1, $v1, -0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daddc) {
            ctx->pc = 0x1DAAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1daac8;
        }
    }
    ctx->pc = 0x1DADE4u;
    // 0x1dade4: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x1dade4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x1dade8: 0x2718ff18  addiu       $t8, $t8, -0xE8
    ctx->pc = 0x1dade8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967064));
    // 0x1dadec: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1dadecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1dadf0: 0x0  nop
    ctx->pc = 0x1dadf0u;
    // NOP
    // 0x1dadf4: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DADF4u;
    {
        const bool branch_taken_0x1dadf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DADF4u;
        // 0x1dadf8: 0x27deff18  addiu       $fp, $fp, -0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dadf4) {
            ctx->pc = 0x1DADD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dadd8;
        }
    }
    ctx->pc = 0x1DADFCu;
label_1dadfc:
    // 0x1dadfc: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x1dadfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1dae00:
    // 0x1dae00: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DAE00u;
    {
        const bool branch_taken_0x1dae00 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE00u;
        // 0x1dae04: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae00) {
            ctx->pc = 0x1DAE14u;
            goto label_1dae14;
        }
    }
    ctx->pc = 0x1DAE08u;
    // 0x1dae08: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1DAE08u;
    SET_GPR_U32(ctx, 31, 0x1DAE10u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1DAE08u, 0x1DAE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE10u;
label_1dae10:
    // 0x1dae10: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dae10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1dae14:
    // 0x1dae14: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1dae14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dae18: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1dae18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1dae1c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1dae1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1dae20: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1dae20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1dae24: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1dae24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1dae28: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x1dae28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1dae2c: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1dae2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dae30: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x1dae30u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dae34: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1dae34u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1dae38: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x1dae38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1dae3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE3Cu;
        // 0x1dae40: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAE44u;
}
