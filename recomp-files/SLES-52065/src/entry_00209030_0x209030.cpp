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

// Function: entry_00209030
// Address: 0x209030 - 0x20905c
void entry_00209030_0x209030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209030_0x209030");
#endif

    ctx->pc = 0x209030u;

    // 0x209030: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x209030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x209034: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x209034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x209038: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x209038u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x20903c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x20903cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x209040: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x209040u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x209044: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x209044u;
    {
        const bool branch_taken_0x209044 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x209048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209044u;
        // 0x209048: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209044) {
            ctx->pc = 0x20905Cu;
            return;
        }
    }
    ctx->pc = 0x20904Cu;
    // 0x20904c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20904cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x209050: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x209050u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x209054: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x209054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x209058: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x209058u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    ctx->pc = 0x20905cu;
}
