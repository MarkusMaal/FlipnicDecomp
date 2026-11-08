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

// Function: entry_001de5d4
// Address: 0x1de5d4 - 0x1de628
void entry_001de5d4_0x1de5d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de5d4_0x1de5d4");
#endif

    ctx->pc = 0x1de5d4u;

    // 0x1de5d4: 0x10800079  beqz        $a0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1DE5D4u;
    {
        const bool branch_taken_0x1de5d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5D4u;
        // 0x1de5d8: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5d4) {
            ctx->pc = 0x1DE7BCu;
            return;
        }
    }
    ctx->pc = 0x1DE5DCu;
    // 0x1de5dc: 0x8e15004c  lw          $s5, 0x4C($s0)
    ctx->pc = 0x1de5dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1de5e0: 0x8c437328  lw          $v1, 0x7328($v0)
    ctx->pc = 0x1de5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29480)));
    // 0x1de5e4: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x1de5e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de5e8: 0x27b40004  addiu       $s4, $sp, 0x4
    ctx->pc = 0x1de5e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1de5ec: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x1de5ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1de5f0: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1DE5F0u;
    {
        const bool branch_taken_0x1de5f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5F0u;
        // 0x1de5f4: 0x24110040  addiu       $s1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5f0) {
            ctx->pc = 0x1DE628u;
            return;
        }
    }
    ctx->pc = 0x1DE5F8u;
    // 0x1de5f8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1de5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1de5fc: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1de5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1de600: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x1de600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1de604: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1de604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1de608: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de60c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1de60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de610: 0x2471ff80  addiu       $s1, $v1, -0x80
    ctx->pc = 0x1de610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x1de614: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x1de614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1de618: 0x2a220080  slti        $v0, $s1, 0x80
    ctx->pc = 0x1de618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1de61c: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x1de61cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1de620: 0xb1182a  slt         $v1, $a1, $s1
    ctx->pc = 0x1de620u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1de624: 0x83880a  movz        $s1, $a0, $v1
    ctx->pc = 0x1de624u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    ctx->pc = 0x1de628u;
}
