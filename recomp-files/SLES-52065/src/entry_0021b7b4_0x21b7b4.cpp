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

// Function: entry_0021b7b4
// Address: 0x21b7b4 - 0x21b7d0
void entry_0021b7b4_0x21b7b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b7b4_0x21b7b4");
#endif

    ctx->pc = 0x21b7b4u;

    // 0x21b7b4: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x21b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
    // 0x21b7b8: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x21b7b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b7bc: 0x24546740  addiu       $s4, $v0, 0x6740
    ctx->pc = 0x21b7bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 26432));
    // 0x21b7c0: 0x24130014  addiu       $s3, $zero, 0x14
    ctx->pc = 0x21b7c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21b7c4: 0x3c158007  lui         $s5, 0x8007
    ctx->pc = 0x21b7c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32775 << 16));
    // 0x21b7c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21B7C8u;
    {
        const bool branch_taken_0x21b7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B7C8u;
        // 0x21b7cc: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b7c8) {
            ctx->pc = 0x21B7DCu;
            return;
        }
    }
    ctx->pc = 0x21B7D0u;
}
