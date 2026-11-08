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

// Function: entry_0012cffc
// Address: 0x12cffc - 0x12d018
void entry_0012cffc_0x12cffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cffc_0x12cffc");
#endif

    switch (ctx->pc) {
        case 0x12d010u: goto label_12d010;
        default: break;
    }

    ctx->pc = 0x12cffcu;

    // 0x12cffc: 0x0  nop
    ctx->pc = 0x12cffcu;
    // NOP
    // 0x12d000: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x12d000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x12d004: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x12d004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d008: 0xc04b420  jal         func_12D080
    ctx->pc = 0x12D008u;
    SET_GPR_U32(ctx, 31, 0x12D010u);
    ctx->pc = 0x12D00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D008u;
    // 0x12d00c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D080u, 0x12D008u, 0x12D010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D010u;
label_12d010:
    // 0x12d010: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12D010u;
    {
        const bool branch_taken_0x12d010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d010) {
            ctx->pc = 0x12D03Cu;
            return;
        }
    }
    ctx->pc = 0x12D018u;
}
