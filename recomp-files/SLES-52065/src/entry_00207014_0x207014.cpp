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

// Function: entry_00207014
// Address: 0x207014 - 0x207070
void entry_00207014_0x207014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207014_0x207014");
#endif

    ctx->pc = 0x207014u;

    // 0x207014: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x207014u;
    {
        const bool branch_taken_0x207014 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x207018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207014u;
        // 0x207018: 0xdfa30000  ld          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207014) {
            ctx->pc = 0x207070u;
            return;
        }
    }
    ctx->pc = 0x20701Cu;
    // 0x20701c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x20701cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207020: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x207020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x207024: 0x304c024  and         $t8, $t8, $a0
    ctx->pc = 0x207024u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x207028: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x207028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20702c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20702cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x207030: 0x21023  negu        $v0, $v0
    ctx->pc = 0x207030u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x207034: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x207034u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x207038: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x207038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20703c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x20703cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x207040: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x207040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x207044: 0x302c025  or          $t8, $t8, $v0
    ctx->pc = 0x207044u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 2));
    // 0x207048: 0x18203c  dsll32      $a0, $t8, 0
    ctx->pc = 0x207048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) << (32 + 0));
    // 0x20704c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x20704cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x207050: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x207050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x207054: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x207054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x207058: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x207058u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x20705c: 0x302c024  and         $t8, $t8, $v0
    ctx->pc = 0x20705cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x207060: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x207060u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x207064: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x207068: 0x303c025  or          $t8, $t8, $v1
    ctx->pc = 0x207068u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
    // 0x20706c: 0xffb80000  sd          $t8, 0x0($sp)
    ctx->pc = 0x20706cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 24));
    ctx->pc = 0x207070u;
}
