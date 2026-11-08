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

// Function: entry_001fa300
// Address: 0x1fa300 - 0x1fa320
void entry_001fa300_0x1fa300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa300_0x1fa300");
#endif

    ctx->pc = 0x1fa300u;

    // 0x1fa300: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fa300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fa304: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1fa304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1fa308: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA308u;
    {
        const bool branch_taken_0x1fa308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA308u;
        // 0x1fa30c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa308) {
            ctx->pc = 0x1FA320u;
            return;
        }
    }
    ctx->pc = 0x1FA310u;
    // 0x1fa310: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x1fa310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x1fa314: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1fa314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1fa318: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1FA318u;
    {
        const bool branch_taken_0x1fa318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA318u;
        // 0x1fa31c: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa318) {
            ctx->pc = 0x1FA3F8u;
            return;
        }
    }
    ctx->pc = 0x1FA320u;
}
