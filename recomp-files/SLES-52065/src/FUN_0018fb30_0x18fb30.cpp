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

// Function: FUN_0018fb30
// Address: 0x18fb30 - 0x18fc94
void FUN_0018fb30_0x18fb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018fb30_0x18fb30");
#endif

    switch (ctx->pc) {
        case 0x18fb48u: goto label_18fb48;
        case 0x18fc3cu: goto label_18fc3c;
        default: break;
    }

    ctx->pc = 0x18fb30u;

    // 0x18fb30: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x18fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x18fb34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18fb34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fb38: 0x2442b1e0  addiu       $v0, $v0, -0x4E20
    ctx->pc = 0x18fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
    // 0x18fb3c: 0xac820234  sw          $v0, 0x234($a0)
    ctx->pc = 0x18fb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 564), GPR_U32(ctx, 2));
    // 0x18fb40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18fb40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fb44: 0x7c800220  sq          $zero, 0x220($a0)
    ctx->pc = 0x18fb44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 544), GPR_VEC(ctx, 0));
label_18fb48:
    // 0x18fb48: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x18fb48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18fb4c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x18fb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18fb50: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x18fb50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x18fb54: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x18fb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x18fb58: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x18fb58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18fb5c: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x18fb5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x18fb60: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x18fb60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x18fb64: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x18fb64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x18fb68: 0x864021  addu        $t0, $a0, $a2
    ctx->pc = 0x18fb68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18fb6c: 0xaca80004  sw          $t0, 0x4($a1)
    ctx->pc = 0x18fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 8));
    // 0x18fb70: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x18fb70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18fb74: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x18fb74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18fb78: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x18fb78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x18fb7c: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x18fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
    // 0x18fb80: 0x24460002  addiu       $a2, $v0, 0x2
    ctx->pc = 0x18fb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x18fb84: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x18fb84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x18fb88: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x18fb88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x18fb8c: 0x24460003  addiu       $a2, $v0, 0x3
    ctx->pc = 0x18fb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x18fb90: 0xaca70014  sw          $a3, 0x14($a1)
    ctx->pc = 0x18fb90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 7));
    // 0x18fb94: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x18fb94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x18fb98: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x18fb98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x18fb9c: 0x864821  addu        $t1, $a0, $a2
    ctx->pc = 0x18fb9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18fba0: 0xaca80020  sw          $t0, 0x20($a1)
    ctx->pc = 0x18fba0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 8));
    // 0x18fba4: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x18fba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x18fba8: 0xaca90024  sw          $t1, 0x24($a1)
    ctx->pc = 0x18fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 9));
    // 0x18fbac: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x18fbacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x18fbb0: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x18fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x18fbb4: 0x864021  addu        $t0, $a0, $a2
    ctx->pc = 0x18fbb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18fbb8: 0xaca70030  sw          $a3, 0x30($a1)
    ctx->pc = 0x18fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 7));
    // 0x18fbbc: 0x24460005  addiu       $a2, $v0, 0x5
    ctx->pc = 0x18fbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x18fbc0: 0xaca80034  sw          $t0, 0x34($a1)
    ctx->pc = 0x18fbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 8));
    // 0x18fbc4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x18fbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x18fbc8: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x18fbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    // 0x18fbcc: 0x865021  addu        $t2, $a0, $a2
    ctx->pc = 0x18fbccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18fbd0: 0xaca90040  sw          $t1, 0x40($a1)
    ctx->pc = 0x18fbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 9));
    // 0x18fbd4: 0x24460006  addiu       $a2, $v0, 0x6
    ctx->pc = 0x18fbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x18fbd8: 0xacaa0044  sw          $t2, 0x44($a1)
    ctx->pc = 0x18fbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 10));
    // 0x18fbdc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x18fbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x18fbe0: 0xaca0004c  sw          $zero, 0x4C($a1)
    ctx->pc = 0x18fbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 0));
    // 0x18fbe4: 0x864821  addu        $t1, $a0, $a2
    ctx->pc = 0x18fbe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18fbe8: 0xaca80050  sw          $t0, 0x50($a1)
    ctx->pc = 0x18fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 8));
    // 0x18fbec: 0x24460007  addiu       $a2, $v0, 0x7
    ctx->pc = 0x18fbecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x18fbf0: 0xaca90054  sw          $t1, 0x54($a1)
    ctx->pc = 0x18fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 9));
    // 0x18fbf4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x18fbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x18fbf8: 0xaca0005c  sw          $zero, 0x5C($a1)
    ctx->pc = 0x18fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 0));
    // 0x18fbfc: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x18fbfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18fc00: 0xacaa0060  sw          $t2, 0x60($a1)
    ctx->pc = 0x18fc00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 10));
    // 0x18fc04: 0x24460008  addiu       $a2, $v0, 0x8
    ctx->pc = 0x18fc04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fc08: 0xaca70064  sw          $a3, 0x64($a1)
    ctx->pc = 0x18fc08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 7));
    // 0x18fc0c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x18fc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x18fc10: 0xaca0006c  sw          $zero, 0x6C($a1)
    ctx->pc = 0x18fc10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 0));
    // 0x18fc14: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x18fc14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18fc18: 0xaca90070  sw          $t1, 0x70($a1)
    ctx->pc = 0x18fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 9));
    // 0x18fc1c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fc20: 0xaca60074  sw          $a2, 0x74($a1)
    ctx->pc = 0x18fc20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 6));
    // 0x18fc24: 0x28460019  slti        $a2, $v0, 0x19
    ctx->pc = 0x18fc24u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x18fc28: 0x14c0ffc7  bnez        $a2, . + 4 + (-0x39 << 2)
    ctx->pc = 0x18FC28u;
    {
        const bool branch_taken_0x18fc28 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC28u;
        // 0x18fc2c: 0xaca0007c  sw          $zero, 0x7C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc28) {
            ctx->pc = 0x18FB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18fb48;
        }
    }
    ctx->pc = 0x18FC30u;
    // 0x18fc30: 0x28410021  slti        $at, $v0, 0x21
    ctx->pc = 0x18fc30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x18fc34: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x18FC34u;
    {
        const bool branch_taken_0x18fc34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC34u;
        // 0x18fc38: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc34) {
            ctx->pc = 0x18FC74u;
            goto label_18fc74;
        }
    }
    ctx->pc = 0x18FC3Cu;
label_18fc3c:
    // 0x18fc3c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x18fc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18fc40: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x18fc40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18fc44: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x18fc44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18fc48: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x18fc48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x18fc4c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x18fc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18fc50: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x18fc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18fc54: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18fc58: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x18fc58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x18fc5c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18fc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18fc60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18fc64: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x18fc64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x18fc68: 0x28430021  slti        $v1, $v0, 0x21
    ctx->pc = 0x18fc68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x18fc6c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x18FC6Cu;
    {
        const bool branch_taken_0x18fc6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC6Cu;
        // 0x18fc70: 0xace0000c  sw          $zero, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc6c) {
            ctx->pc = 0x18FC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18fc3c;
        }
    }
    ctx->pc = 0x18FC74u;
label_18fc74:
    // 0x18fc74: 0x0  nop
    ctx->pc = 0x18fc74u;
    // NOP
    // 0x18fc78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18fc7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18fc80: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x18fc80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x18fc84: 0xac40fff4  sw          $zero, -0xC($v0)
    ctx->pc = 0x18fc84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 0));
    // 0x18fc88: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x18fc88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x18FC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC8Cu;
        // 0x18fc90: 0xac800230  sw          $zero, 0x230($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FC94u;
}
