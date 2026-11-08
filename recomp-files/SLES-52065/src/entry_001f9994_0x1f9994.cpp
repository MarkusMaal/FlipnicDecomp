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

// Function: entry_001f9994
// Address: 0x1f9994 - 0x1f99c8
void entry_001f9994_0x1f9994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9994_0x1f9994");
#endif

    ctx->pc = 0x1f9994u;

    // 0x1f9994: 0x3c023eff  lui         $v0, 0x3EFF
    ctx->pc = 0x1f9994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
    // 0x1f9998: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f9998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f999c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f999cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f99a0: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1F99A0u;
    {
        const bool branch_taken_0x1f99a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99A0u;
        // 0x1f99a4: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f99a0) {
            ctx->pc = 0x1F9ACCu;
            return;
        }
    }
    ctx->pc = 0x1F99A8u;
    // 0x1f99a8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f99a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f99ac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F99ACu;
    {
        const bool branch_taken_0x1f99ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f99ac) {
            ctx->pc = 0x1F99B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F99ACu;
            // 0x1f99b0: 0x460b5d42  mul.s       $f21, $f11, $f11 (Delay Slot)
            ctx->f[21] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F99C8u;
            return;
        }
    }
    ctx->pc = 0x1F99B4u;
    // 0x1f99b4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1f99b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1f99b8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f99b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f99bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f99bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f99c0: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x1F99C0u;
    {
        const bool branch_taken_0x1f99c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99C0u;
        // 0x1f99c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f99c0) {
            ctx->pc = 0x1F9D34u;
            return;
        }
    }
    ctx->pc = 0x1F99C8u;
}
