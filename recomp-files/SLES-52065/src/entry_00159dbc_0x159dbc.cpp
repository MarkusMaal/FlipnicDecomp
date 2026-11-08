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

// Function: entry_00159dbc
// Address: 0x159dbc - 0x159dfc
void entry_00159dbc_0x159dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159dbc_0x159dbc");
#endif

    switch (ctx->pc) {
        case 0x159dd0u: goto label_159dd0;
        default: break;
    }

    ctx->pc = 0x159dbcu;

    // 0x159dbc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x159dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x159dc0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x159dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x159dc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x159dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x159dc8: 0xc0425a4  jal         func_109690
    ctx->pc = 0x159DC8u;
    SET_GPR_U32(ctx, 31, 0x159DD0u);
    ctx->pc = 0x159DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159DC8u;
    // 0x159dcc: 0x8065002b  lb          $a1, 0x2B($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x159DC8u, 0x159DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159DD0u;
label_159dd0:
    // 0x159dd0: 0xc60102f0  lwc1        $f1, 0x2F0($s0)
    ctx->pc = 0x159dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159dd4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x159dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x159dd8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x159dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x159ddc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159de0: 0x0  nop
    ctx->pc = 0x159de0u;
    // NOP
    // 0x159de4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x159de4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159de8: 0x0  nop
    ctx->pc = 0x159de8u;
    // NOP
    // 0x159dec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x159DECu;
    {
        const bool branch_taken_0x159dec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159DECu;
        // 0x159df0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159dec) {
            ctx->pc = 0x159DFCu;
            return;
        }
    }
    ctx->pc = 0x159DF4u;
    // 0x159df4: 0xc042118  jal         func_108460
    ctx->pc = 0x159DF4u;
    SET_GPR_U32(ctx, 31, 0x159DFCu);
    ctx->pc = 0x159DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159DF4u;
    // 0x159df8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x159DF4u, 0x159DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159DFCu;
}
