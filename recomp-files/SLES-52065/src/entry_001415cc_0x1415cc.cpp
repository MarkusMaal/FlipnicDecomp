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

// Function: entry_001415cc
// Address: 0x1415cc - 0x14160c
void entry_001415cc_0x1415cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001415cc_0x1415cc");
#endif

    ctx->pc = 0x1415ccu;

    // 0x1415cc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1415ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1415d0: 0x27a80220  addiu       $t0, $sp, 0x220
    ctx->pc = 0x1415d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1415d4: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x1415d4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1415d8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1415d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1415dc: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x1415dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1415e0: 0x27a50228  addiu       $a1, $sp, 0x228
    ctx->pc = 0x1415e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
    // 0x1415e4: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x1415e4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 7));
    // 0x1415e8: 0x27a40224  addiu       $a0, $sp, 0x224
    ctx->pc = 0x1415e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 548));
    // 0x1415ec: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x1415ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x1415f0: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x1415f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1415f4: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x1415f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1415f8: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x1415f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1415fc: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x1415fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x141600: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x141600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x141604: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x141604u;
    {
        const bool branch_taken_0x141604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141604u;
        // 0x141608: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x141604) {
            ctx->pc = 0x141654u;
            return;
        }
    }
    ctx->pc = 0x14160Cu;
}
