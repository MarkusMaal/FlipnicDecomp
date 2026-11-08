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

// Function: entry_001409f8
// Address: 0x1409f8 - 0x140a84
void entry_001409f8_0x1409f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001409f8_0x1409f8");
#endif

    ctx->pc = 0x1409f8u;

    // 0x1409f8: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x1409f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1409fc: 0xea3823  subu        $a3, $a3, $t2
    ctx->pc = 0x1409fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x140a00: 0xc7082b  sltu        $at, $a2, $a3
    ctx->pc = 0x140a00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x140a04: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
    ctx->pc = 0x140A04u;
    {
        const bool branch_taken_0x140a04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x140A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A04u;
        // 0x140a08: 0x1461823  subu        $v1, $t2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140a04) {
            ctx->pc = 0x140B48u;
            return;
        }
    }
    ctx->pc = 0x140A0Cu;
    // 0x140a0c: 0x10c00044  beqz        $a2, . + 4 + (0x44 << 2)
    ctx->pc = 0x140A0Cu;
    {
        const bool branch_taken_0x140a0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x140a0c) {
            ctx->pc = 0x140B20u;
            return;
        }
    }
    ctx->pc = 0x140A14u;
    // 0x140a14: 0x8caa000c  lw          $t2, 0xC($a1)
    ctx->pc = 0x140a14u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x140a18: 0xbc880  sll         $t9, $t3, 2
    ctx->pc = 0x140a18u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x140a1c: 0x27b80030  addiu       $t8, $sp, 0x30
    ctx->pc = 0x140a1cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x140a20: 0x27af0070  addiu       $t7, $sp, 0x70
    ctx->pc = 0x140a20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x140a24: 0x27ae0000  addiu       $t6, $sp, 0x0
    ctx->pc = 0x140a24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x140a28: 0x27ad0060  addiu       $t5, $sp, 0x60
    ctx->pc = 0x140a28u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x140a2c: 0x27ac0010  addiu       $t4, $sp, 0x10
    ctx->pc = 0x140a2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x140a30: 0x27ab0050  addiu       $t3, $sp, 0x50
    ctx->pc = 0x140a30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x140a34: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x140a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x140a38: 0x27a90068  addiu       $t1, $sp, 0x68
    ctx->pc = 0x140a38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x140a3c: 0x27a80064  addiu       $t0, $sp, 0x64
    ctx->pc = 0x140a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x140a40: 0x1595021  addu        $t2, $t2, $t9
    ctx->pc = 0x140a40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 25)));
    // 0x140a44: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x140a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x140a48: 0xafaa0038  sw          $t2, 0x38($sp)
    ctx->pc = 0x140a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 10));
    // 0x140a4c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x140a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x140a50: 0xdf0a0000  ld          $t2, 0x0($t8)
    ctx->pc = 0x140a50u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x140a54: 0xc7000008  lwc1        $f0, 0x8($t8)
    ctx->pc = 0x140a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140a58: 0xfdea0000  sd          $t2, 0x0($t7)
    ctx->pc = 0x140a58u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 10));
    // 0x140a5c: 0xe5e00008  swc1        $f0, 0x8($t7)
    ctx->pc = 0x140a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x140a60: 0xddca0000  ld          $t2, 0x0($t6)
    ctx->pc = 0x140a60u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x140a64: 0xc5c00008  lwc1        $f0, 0x8($t6)
    ctx->pc = 0x140a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140a68: 0xfdaa0000  sd          $t2, 0x0($t5)
    ctx->pc = 0x140a68u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 10));
    // 0x140a6c: 0xe5a00008  swc1        $f0, 0x8($t5)
    ctx->pc = 0x140a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x140a70: 0xdd8a0000  ld          $t2, 0x0($t4)
    ctx->pc = 0x140a70u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x140a74: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x140a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140a78: 0xfd6a0000  sd          $t2, 0x0($t3)
    ctx->pc = 0x140a78u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 10));
    // 0x140a7c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x140A7Cu;
    {
        const bool branch_taken_0x140a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A7Cu;
        // 0x140a80: 0xe5600008  swc1        $f0, 0x8($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x140a7c) {
            ctx->pc = 0x140B10u;
            return;
        }
    }
    ctx->pc = 0x140A84u;
}
