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

// Function: entry_00120384
// Address: 0x120384 - 0x120400
void entry_00120384_0x120384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120384_0x120384");
#endif

    ctx->pc = 0x120384u;

    // 0x120384: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x120384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x120388: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x120388u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x12038c: 0x221082b  sltu        $at, $s1, $at
    ctx->pc = 0x12038cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x120390: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x120390u;
    {
        const bool branch_taken_0x120390 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x120394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120390u;
        // 0x120394: 0x3151821  addu        $v1, $t8, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120390) {
            ctx->pc = 0x120400u;
            return;
        }
    }
    ctx->pc = 0x120398u;
    // 0x120398: 0x26d6c000  addiu       $s6, $s6, -0x4000
    ctx->pc = 0x120398u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950912));
    // 0x12039c: 0xa06f0003  sb          $t7, 0x3($v1)
    ctx->pc = 0x12039cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 15));
    // 0x1203a0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1203a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1203a4: 0xac6e0004  sw          $t6, 0x4($v1)
    ctx->pc = 0x1203a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 14));
    // 0x1203a8: 0xa46d0000  sh          $t5, 0x0($v1)
    ctx->pc = 0x1203a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x1203ac: 0xac6c0008  sw          $t4, 0x8($v1)
    ctx->pc = 0x1203acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 12));
    // 0x1203b0: 0xac6b000c  sw          $t3, 0xC($v1)
    ctx->pc = 0x1203b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 11));
    // 0x1203b4: 0x8e840084  lw          $a0, 0x84($s4)
    ctx->pc = 0x1203b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x1203b8: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x1203b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1203bc: 0xa06f0013  sb          $t7, 0x13($v1)
    ctx->pc = 0x1203bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 19), (uint8_t)GPR_U32(ctx, 15));
    // 0x1203c0: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x1203c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1203c4: 0xa0600012  sb          $zero, 0x12($v1)
    ctx->pc = 0x1203c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x1203c8: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x1203c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x1203cc: 0x3c04fffc  lui         $a0, 0xFFFC
    ctx->pc = 0x1203ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65532 << 16));
    // 0x1203d0: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x1203d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1203d4: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x1203d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1203d8: 0xa4640010  sh          $a0, 0x10($v1)
    ctx->pc = 0x1203d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x1203dc: 0xac6c0018  sw          $t4, 0x18($v1)
    ctx->pc = 0x1203dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 12));
    // 0x1203e0: 0xac6a001c  sw          $t2, 0x1C($v1)
    ctx->pc = 0x1203e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 10));
    // 0x1203e4: 0xa0690023  sb          $t1, 0x23($v1)
    ctx->pc = 0x1203e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 35), (uint8_t)GPR_U32(ctx, 9));
    // 0x1203e8: 0xa0600022  sb          $zero, 0x22($v1)
    ctx->pc = 0x1203e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x1203ec: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1203ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x1203f0: 0xa4600020  sh          $zero, 0x20($v1)
    ctx->pc = 0x1203f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x1203f4: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1203f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1203f8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1203F8u;
    {
        const bool branch_taken_0x1203f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1203FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1203F8u;
        // 0x1203fc: 0xac68002c  sw          $t0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1203f8) {
            ctx->pc = 0x1204A4u;
            return;
        }
    }
    ctx->pc = 0x120400u;
}
