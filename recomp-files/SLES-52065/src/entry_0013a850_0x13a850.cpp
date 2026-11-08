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

// Function: entry_0013a850
// Address: 0x13a850 - 0x13a900
void entry_0013a850_0x13a850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a850_0x13a850");
#endif

    ctx->pc = 0x13a850u;

    // 0x13a850: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x13a850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13a854: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x13a854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x13a858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a85c: 0xafa400a4  sw          $a0, 0xA4($sp)
    ctx->pc = 0x13a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
    // 0x13a860: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x13a860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x13a864: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x13a864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
    // 0x13a868: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x13a868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a86c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13a86cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a870: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x13a870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x13a874: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x13a874u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x13a878: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x13a878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a87c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x13a87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x13a880: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x13a880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x13a884: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x13a884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a888: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x13a888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x13a88c: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x13a88cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x13a890: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x13a890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a894: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x13a894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x13a898: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x13a898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x13a89c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x13a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a8a0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x13a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x13a8a4: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x13a8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x13a8a8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x13a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13a8ac: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x13a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x13a8b0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x13a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x13a8b4: 0x8c640090  lw          $a0, 0x90($v1)
    ctx->pc = 0x13a8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x13a8b8: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x13a8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x13a8bc: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13A8BCu;
    {
        const bool branch_taken_0x13a8bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8BCu;
        // 0x13a8c0: 0x3c024400  lui         $v0, 0x4400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a8bc) {
            ctx->pc = 0x13A900u;
            return;
        }
    }
    ctx->pc = 0x13A8C4u;
    // 0x13a8c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13a8c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13a8c8: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x13a8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a8cc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a8d0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13a8d4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x13a8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x13a8d8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x13a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13a8dc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a8e0: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x13a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x13a8e4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13a8e8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x13a8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x13a8ec: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x13a8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x13a8f0: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x13a8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a8f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13a8f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13a8f8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x13a8f8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x13a8fc: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x13a8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x13a900u;
}
