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

// Function: entry_001605ec
// Address: 0x1605ec - 0x160600
void entry_001605ec_0x1605ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001605ec_0x1605ec");
#endif

    switch (ctx->pc) {
        case 0x1605f8u: goto label_1605f8;
        default: break;
    }

    ctx->pc = 0x1605ecu;

    // 0x1605ec: 0xc4ad0008  lwc1        $f13, 0x8($a1)
    ctx->pc = 0x1605ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1605f0: 0xc05835c  jal         func_160D70
    ctx->pc = 0x1605F0u;
    SET_GPR_U32(ctx, 31, 0x1605F8u);
    ctx->pc = 0x1605F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1605F0u;
    // 0x1605f4: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x160D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D70u, 0x1605F0u, 0x1605F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1605F8u;
label_1605f8:
    // 0x1605f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1605f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1605fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1605fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160600u;
}
