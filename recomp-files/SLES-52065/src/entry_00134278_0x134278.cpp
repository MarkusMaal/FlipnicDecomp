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

// Function: entry_00134278
// Address: 0x134278 - 0x134298
void entry_00134278_0x134278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134278_0x134278");
#endif

    ctx->pc = 0x134278u;

    // 0x134278: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x134278u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13427c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x13427cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x134280: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x134280u;
    {
        const bool branch_taken_0x134280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x134284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134280u;
        // 0x134284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134280) {
            ctx->pc = 0x13429Cu;
            return;
        }
    }
    ctx->pc = 0x134288u;
    // 0x134288: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x134288u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x13428c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13428Cu;
    {
        const bool branch_taken_0x13428c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13428c) {
            ctx->pc = 0x134298u;
            return;
        }
    }
    ctx->pc = 0x134294u;
    // 0x134294: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x134294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->pc = 0x134298u;
}
