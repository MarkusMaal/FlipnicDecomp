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

// Function: entry_0012fb70
// Address: 0x12fb70 - 0x12fc24
void entry_0012fb70_0x12fb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fb70_0x12fb70");
#endif

    ctx->pc = 0x12fb70u;

label_12fb70:
    // 0x12fb70: 0xfd1821  addu        $v1, $a3, $sp
    ctx->pc = 0x12fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x12fb74: 0x24690470  addiu       $t1, $v1, 0x470
    ctx->pc = 0x12fb74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1136));
    // 0x12fb78: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x12fb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x12fb7c: 0x912b0000  lbu         $t3, 0x0($t1)
    ctx->pc = 0x12fb7cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x12fb80: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x12fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x12fb84: 0x7d5021  addu        $t2, $v1, $sp
    ctx->pc = 0x12fb84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x12fb88: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x12fb88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x12fb8c: 0x9d3021  addu        $a2, $a0, $sp
    ctx->pc = 0x12fb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x12fb90: 0x26430002  addiu       $v1, $s2, 0x2
    ctx->pc = 0x12fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x12fb94: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x12fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x12fb98: 0x26440003  addiu       $a0, $s2, 0x3
    ctx->pc = 0x12fb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x12fb9c: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x12fb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x12fba0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x12fba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x12fba4: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x12fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x12fba8: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x12fba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x12fbac: 0xa54b0170  sh          $t3, 0x170($t2)
    ctx->pc = 0x12fbacu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 368), (uint16_t)GPR_U32(ctx, 11));
    // 0x12fbb0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x12fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x12fbb4: 0x912d0001  lbu         $t5, 0x1($t1)
    ctx->pc = 0x12fbb4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x12fbb8: 0x264b0005  addiu       $t3, $s2, 0x5
    ctx->pc = 0x12fbb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x12fbbc: 0xb5840  sll         $t3, $t3, 1
    ctx->pc = 0x12fbbcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x12fbc0: 0x264a0006  addiu       $t2, $s2, 0x6
    ctx->pc = 0x12fbc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x12fbc4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x12fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x12fbc8: 0x17d6021  addu        $t4, $t3, $sp
    ctx->pc = 0x12fbc8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
    // 0x12fbcc: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x12fbccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x12fbd0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x12fbd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x12fbd4: 0x15d5821  addu        $t3, $t2, $sp
    ctx->pc = 0x12fbd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x12fbd8: 0x264a0007  addiu       $t2, $s2, 0x7
    ctx->pc = 0x12fbd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
    // 0x12fbdc: 0xa4cd0170  sh          $t5, 0x170($a2)
    ctx->pc = 0x12fbdcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 368), (uint16_t)GPR_U32(ctx, 13));
    // 0x12fbe0: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x12fbe0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x12fbe4: 0x912d0002  lbu         $t5, 0x2($t1)
    ctx->pc = 0x12fbe4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x12fbe8: 0x15d5021  addu        $t2, $t2, $sp
    ctx->pc = 0x12fbe8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x12fbec: 0xe8302b  sltu        $a2, $a3, $t0
    ctx->pc = 0x12fbecu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x12fbf0: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x12fbf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x12fbf4: 0xa4ad0170  sh          $t5, 0x170($a1)
    ctx->pc = 0x12fbf4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 368), (uint16_t)GPR_U32(ctx, 13));
    // 0x12fbf8: 0x91250003  lbu         $a1, 0x3($t1)
    ctx->pc = 0x12fbf8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x12fbfc: 0xa4850170  sh          $a1, 0x170($a0)
    ctx->pc = 0x12fbfcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 368), (uint16_t)GPR_U32(ctx, 5));
    // 0x12fc00: 0x91240004  lbu         $a0, 0x4($t1)
    ctx->pc = 0x12fc00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x12fc04: 0xa4640170  sh          $a0, 0x170($v1)
    ctx->pc = 0x12fc04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 368), (uint16_t)GPR_U32(ctx, 4));
    // 0x12fc08: 0x91230005  lbu         $v1, 0x5($t1)
    ctx->pc = 0x12fc08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
    // 0x12fc0c: 0xa5830170  sh          $v1, 0x170($t4)
    ctx->pc = 0x12fc0cu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 368), (uint16_t)GPR_U32(ctx, 3));
    // 0x12fc10: 0x91230006  lbu         $v1, 0x6($t1)
    ctx->pc = 0x12fc10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x12fc14: 0xa5630170  sh          $v1, 0x170($t3)
    ctx->pc = 0x12fc14u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 368), (uint16_t)GPR_U32(ctx, 3));
    // 0x12fc18: 0x91230007  lbu         $v1, 0x7($t1)
    ctx->pc = 0x12fc18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 7)));
    // 0x12fc1c: 0x14c0ffd4  bnez        $a2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x12FC1Cu;
    {
        const bool branch_taken_0x12fc1c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC1Cu;
        // 0x12fc20: 0xa5430170  sh          $v1, 0x170($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 368), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc1c) {
            ctx->pc = 0x12FB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12fb70;
        }
    }
    ctx->pc = 0x12FC24u;
}
