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

// Function: entry_00161304
// Address: 0x161304 - 0x161328
void entry_00161304_0x161304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161304_0x161304");
#endif

    ctx->pc = 0x161304u;

    // 0x161304: 0x8202000c  lb          $v0, 0xC($s0)
    ctx->pc = 0x161304u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x161308: 0x18400030  blez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x161308u;
    {
        const bool branch_taken_0x161308 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x161308) {
            ctx->pc = 0x1613CCu;
            return;
        }
    }
    ctx->pc = 0x161310u;
    // 0x161310: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x161310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x161314: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161314u;
    {
        const bool branch_taken_0x161314 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x161318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161314u;
        // 0x161318: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161314) {
            ctx->pc = 0x161328u;
            return;
        }
    }
    ctx->pc = 0x16131Cu;
    // 0x16131c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16131cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161320: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x161320u;
    {
        const bool branch_taken_0x161320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161320u;
        // 0x161324: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161320) {
            ctx->pc = 0x161340u;
            return;
        }
    }
    ctx->pc = 0x161328u;
}
