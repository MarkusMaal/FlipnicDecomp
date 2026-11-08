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

// Function: entry_001395e8
// Address: 0x1395e8 - 0x139644
void entry_001395e8_0x1395e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001395e8_0x1395e8");
#endif

    ctx->pc = 0x1395e8u;

    // 0x1395e8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1395e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1395ec: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x1395ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1395f0: 0x1440fe70  bnez        $v0, . + 4 + (-0x190 << 2)
    ctx->pc = 0x1395F0u;
    {
        const bool branch_taken_0x1395f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1395f0) {
            ctx->pc = 0x138FB4u;
            return;
        }
    }
    ctx->pc = 0x1395F8u;
    // 0x1395f8: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1395f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1395fc: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1395fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x139600: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x139600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139604: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x139604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x139608: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x139608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13960c: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x13960cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x139610: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x139610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x139614: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x139614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x139618: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x139618u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13961c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x13961cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x139620: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x139620u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x139624: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x139624u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x139628: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x139628u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x13962c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x13962cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x139630: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x139630u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x139634: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x139634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139638: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x139638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x13963c: 0x1440fdb5  bnez        $v0, . + 4 + (-0x24B << 2)
    ctx->pc = 0x13963Cu;
    {
        const bool branch_taken_0x13963c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x139640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13963Cu;
        // 0x139640: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13963c) {
            ctx->pc = 0x138D14u;
            return;
        }
    }
    ctx->pc = 0x139644u;
}
