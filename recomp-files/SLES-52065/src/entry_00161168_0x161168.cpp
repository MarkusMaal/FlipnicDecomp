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

// Function: entry_00161168
// Address: 0x161168 - 0x16118c
void entry_00161168_0x161168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161168_0x161168");
#endif

    ctx->pc = 0x161168u;

    // 0x161168: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
    ctx->pc = 0x161168u;
    {
        const bool branch_taken_0x161168 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161168u;
        // 0x16116c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161168) {
            ctx->pc = 0x161238u;
            return;
        }
    }
    ctx->pc = 0x161170u;
    // 0x161170: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x161170u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x161174: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x161174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x161178: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161178u;
    {
        const bool branch_taken_0x161178 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161178u;
        // 0x16117c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161178) {
            ctx->pc = 0x16118Cu;
            return;
        }
    }
    ctx->pc = 0x161180u;
    // 0x161180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161184: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x161184u;
    {
        const bool branch_taken_0x161184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161184u;
        // 0x161188: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161184) {
            ctx->pc = 0x1611A4u;
            return;
        }
    }
    ctx->pc = 0x16118Cu;
}
