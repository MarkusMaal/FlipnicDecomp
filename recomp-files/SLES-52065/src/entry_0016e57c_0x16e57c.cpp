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

// Function: entry_0016e57c
// Address: 0x16e57c - 0x16e5c8
void entry_0016e57c_0x16e57c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e57c_0x16e57c");
#endif

    ctx->pc = 0x16e57cu;

    // 0x16e57c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x16e57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16e580: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16e580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e584: 0x80840022  lb          $a0, 0x22($a0)
    ctx->pc = 0x16e584u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x16e588: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x16E588u;
    {
        const bool branch_taken_0x16e588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16e588) {
            ctx->pc = 0x16E5C8u;
            return;
        }
    }
    ctx->pc = 0x16E590u;
    // 0x16e590: 0x86240216  lh          $a0, 0x216($s1)
    ctx->pc = 0x16e590u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 534)));
    // 0x16e594: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x16e594u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x16e598: 0x10200061  beqz        $at, . + 4 + (0x61 << 2)
    ctx->pc = 0x16E598u;
    {
        const bool branch_taken_0x16e598 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e598) {
            ctx->pc = 0x16E720u;
            return;
        }
    }
    ctx->pc = 0x16E5A0u;
    // 0x16e5a0: 0x86230214  lh          $v1, 0x214($s1)
    ctx->pc = 0x16e5a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x16e5a4: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x16e5a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16e5a8: 0x1020005d  beqz        $at, . + 4 + (0x5D << 2)
    ctx->pc = 0x16E5A8u;
    {
        const bool branch_taken_0x16e5a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e5a8) {
            ctx->pc = 0x16E720u;
            return;
        }
    }
    ctx->pc = 0x16E5B0u;
    // 0x16e5b0: 0x86240218  lh          $a0, 0x218($s1)
    ctx->pc = 0x16e5b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 536)));
    // 0x16e5b4: 0x240307f8  addiu       $v1, $zero, 0x7F8
    ctx->pc = 0x16e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
    // 0x16e5b8: 0x10830059  beq         $a0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x16E5B8u;
    {
        const bool branch_taken_0x16e5b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5B8u;
        // 0x16e5bc: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e5b8) {
            ctx->pc = 0x16E720u;
            return;
        }
    }
    ctx->pc = 0x16E5C0u;
    // 0x16e5c0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x16E5C0u;
    {
        const bool branch_taken_0x16e5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5C0u;
        // 0x16e5c4: 0xa6230218  sh          $v1, 0x218($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 536), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e5c0) {
            ctx->pc = 0x16E720u;
            return;
        }
    }
    ctx->pc = 0x16E5C8u;
}
