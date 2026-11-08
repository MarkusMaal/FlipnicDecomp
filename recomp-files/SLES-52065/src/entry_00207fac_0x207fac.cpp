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

// Function: entry_00207fac
// Address: 0x207fac - 0x207fbc
void entry_00207fac_0x207fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207fac_0x207fac");
#endif

    ctx->pc = 0x207facu;

    // 0x207fac: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x207facu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x207fb0: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x207fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x207fb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x207fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207fb8: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x207fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    ctx->pc = 0x207fbcu;
}
