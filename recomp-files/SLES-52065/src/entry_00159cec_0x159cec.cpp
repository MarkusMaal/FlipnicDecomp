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

// Function: entry_00159cec
// Address: 0x159cec - 0x159d28
void entry_00159cec_0x159cec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159cec_0x159cec");
#endif

    switch (ctx->pc) {
        case 0x159d14u: goto label_159d14;
        case 0x159d20u: goto label_159d20;
        default: break;
    }

    ctx->pc = 0x159cecu;

    // 0x159cec: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x159CECu;
    {
        const bool branch_taken_0x159cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x159cec) {
            ctx->pc = 0x159D28u;
            return;
        }
    }
    ctx->pc = 0x159CF4u;
    // 0x159cf4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x159cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x159cf8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x159cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x159cfc: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x159cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x159d00: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x159d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x159d04: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x159d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x159d08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x159d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x159d0c: 0xc0425a4  jal         func_109690
    ctx->pc = 0x159D0Cu;
    SET_GPR_U32(ctx, 31, 0x159D14u);
    ctx->pc = 0x159D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D0Cu;
    // 0x159d10: 0x80a5002b  lb          $a1, 0x2B($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 43)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x159D0Cu, 0x159D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D14u;
label_159d14:
    // 0x159d14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d18: 0xc042118  jal         func_108460
    ctx->pc = 0x159D18u;
    SET_GPR_U32(ctx, 31, 0x159D20u);
    ctx->pc = 0x159D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D18u;
    // 0x159d1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x159D18u, 0x159D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D20u;
label_159d20:
    // 0x159d20: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x159D20u;
    {
        const bool branch_taken_0x159d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D20u;
        // 0x159d24: 0x8e03033c  lw          $v1, 0x33C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d20) {
            ctx->pc = 0x159E00u;
            return;
        }
    }
    ctx->pc = 0x159D28u;
}
