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

// Function: entry_0013fc58
// Address: 0x13fc58 - 0x13fcb4
void entry_0013fc58_0x13fc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fc58_0x13fc58");
#endif

    ctx->pc = 0x13fc58u;

    // 0x13fc58: 0x8e4a0008  lw          $t2, 0x8($s2)
    ctx->pc = 0x13fc58u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x13fc5c: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x13fc5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13fc60: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x13fc60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x13fc64: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x13fc64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13fc68: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x13fc68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13fc6c: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x13fc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x13fc70: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x13fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x13fc74: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x13fc74u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x13fc78: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x13fc78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x13fc7c: 0xafb20040  sw          $s2, 0x40($sp)
    ctx->pc = 0x13fc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 18));
    // 0x13fc80: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x13fc80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x13fc84: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x13fc84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x13fc88: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x13fc88u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x13fc8c: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x13fc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13fc90: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x13fc90u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 7));
    // 0x13fc94: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x13fc94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x13fc98: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x13fc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13fc9c: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x13fc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13fca0: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x13fca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13fca4: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x13fca4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x13fca8: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x13fca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x13fcac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x13FCACu;
    {
        const bool branch_taken_0x13fcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FCACu;
        // 0x13fcb0: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fcac) {
            ctx->pc = 0x13FCFCu;
            return;
        }
    }
    ctx->pc = 0x13FCB4u;
}
