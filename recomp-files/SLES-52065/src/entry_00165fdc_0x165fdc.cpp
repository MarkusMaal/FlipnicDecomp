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

// Function: entry_00165fdc
// Address: 0x165fdc - 0x166004
void entry_00165fdc_0x165fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165fdc_0x165fdc");
#endif

    switch (ctx->pc) {
        case 0x165ffcu: goto label_165ffc;
        default: break;
    }

    ctx->pc = 0x165fdcu;

    // 0x165fdc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x165FDCu;
    {
        const bool branch_taken_0x165fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FDCu;
        // 0x165fe0: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fdc) {
            ctx->pc = 0x166004u;
            return;
        }
    }
    ctx->pc = 0x165FE4u;
    // 0x165fe4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x165fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x165fe8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x165fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165fec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x165fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165ff0: 0xa6050224  sh          $a1, 0x224($s0)
    ctx->pc = 0x165ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 5));
    // 0x165ff4: 0xc0425a4  jal         func_109690
    ctx->pc = 0x165FF4u;
    SET_GPR_U32(ctx, 31, 0x165FFCu);
    ctx->pc = 0x165FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165FF4u;
    // 0x165ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x165FF4u, 0x165FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165FFCu;
label_165ffc:
    // 0x165ffc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x165FFCu;
    {
        const bool branch_taken_0x165ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FFCu;
        // 0x166000: 0x86030220  lh          $v1, 0x220($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ffc) {
            ctx->pc = 0x166020u;
            return;
        }
    }
    ctx->pc = 0x166004u;
}
