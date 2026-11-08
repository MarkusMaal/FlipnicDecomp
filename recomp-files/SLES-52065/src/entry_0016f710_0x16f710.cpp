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

// Function: entry_0016f710
// Address: 0x16f710 - 0x16f730
void entry_0016f710_0x16f710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f710_0x16f710");
#endif

    ctx->pc = 0x16f710u;

    // 0x16f710: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x16f710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16f714: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x16F714u;
    {
        const bool branch_taken_0x16f714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f714) {
            ctx->pc = 0x16F6C8u;
            return;
        }
    }
    ctx->pc = 0x16F71Cu;
    // 0x16f71c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x16f71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f720: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x16f720u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f724: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x16f724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x16f728: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16F728u;
    {
        const bool branch_taken_0x16f728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F728u;
        // 0x16f72c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f728) {
            ctx->pc = 0x16F73Cu;
            return;
        }
    }
    ctx->pc = 0x16F730u;
}
