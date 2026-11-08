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

// Function: entry_0018bff8
// Address: 0x18bff8 - 0x18c030
void entry_0018bff8_0x18bff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bff8_0x18bff8");
#endif

    ctx->pc = 0x18bff8u;

    // 0x18bff8: 0xc62104e8  lwc1        $f1, 0x4E8($s1)
    ctx->pc = 0x18bff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bffc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x18c000: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18c000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18c004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c008: 0x0  nop
    ctx->pc = 0x18c008u;
    // NOP
    // 0x18c00c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18c00cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c010: 0x0  nop
    ctx->pc = 0x18c010u;
    // NOP
    // 0x18c014: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18C014u;
    {
        const bool branch_taken_0x18c014 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C014u;
        // 0x18c018: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c014) {
            ctx->pc = 0x18C030u;
            return;
        }
    }
    ctx->pc = 0x18C01Cu;
    // 0x18c01c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18c01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18c020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18c020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c024: 0x0  nop
    ctx->pc = 0x18c024u;
    // NOP
    // 0x18c028: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18c028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18c02c: 0xe62004e8  swc1        $f0, 0x4E8($s1)
    ctx->pc = 0x18c02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1256), bits); }
    ctx->pc = 0x18c030u;
}
