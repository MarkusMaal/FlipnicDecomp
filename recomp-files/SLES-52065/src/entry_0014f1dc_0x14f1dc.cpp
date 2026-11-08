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

// Function: entry_0014f1dc
// Address: 0x14f1dc - 0x14f26c
void entry_0014f1dc_0x14f1dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f1dc_0x14f1dc");
#endif

    switch (ctx->pc) {
        case 0x14f1fcu: goto label_14f1fc;
        case 0x14f24cu: goto label_14f24c;
        case 0x14f260u: goto label_14f260;
        default: break;
    }

    ctx->pc = 0x14f1dcu;

    // 0x14f1dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f1dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f1e0: 0x0  nop
    ctx->pc = 0x14f1e0u;
    // NOP
    // 0x14f1e4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14f1e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f1e8: 0x0  nop
    ctx->pc = 0x14f1e8u;
    // NOP
    // 0x14f1ec: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x14F1ECu;
    {
        const bool branch_taken_0x14f1ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f1ec) {
            ctx->pc = 0x14F26Cu;
            return;
        }
    }
    ctx->pc = 0x14F1F4u;
    // 0x14f1f4: 0xc060908  jal         func_182420
    ctx->pc = 0x14F1F4u;
    SET_GPR_U32(ctx, 31, 0x14F1FCu);
    ctx->pc = 0x182420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182420u, 0x14F1F4u, 0x14F1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F1FCu;
label_14f1fc:
    // 0x14f1fc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x14f1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14f200: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x14f200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14f204: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14f204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f208: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x14f208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x14f20c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x14f20cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x14f210: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x14f210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x14f214: 0xa0c50003  sb          $a1, 0x3($a2)
    ctx->pc = 0x14f214u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x14f218: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x14f218u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14f21c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x14f21cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x14f220: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x14f220u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x14f224: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x14f224u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x14f228: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x14f228u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x14f22c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14f230: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14f230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14f234: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14f234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x14f238: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x14f238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14f23c: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x14f23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x14f240: 0xc64f000c  lwc1        $f15, 0xC($s2)
    ctx->pc = 0x14f240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x14f244: 0xc0608ac  jal         func_1822B0
    ctx->pc = 0x14F244u;
    SET_GPR_U32(ctx, 31, 0x14F24Cu);
    ctx->pc = 0x14F248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F244u;
    // 0x14f248: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1822B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1822B0u, 0x14F244u, 0x14F24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F24Cu;
label_14f24c:
    // 0x14f24c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14f24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14f250: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x14f250u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x14f254: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14f254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f258: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x14F258u;
    SET_GPR_U32(ctx, 31, 0x14F260u);
    ctx->pc = 0x14F25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F258u;
    // 0x14f25c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x14F258u, 0x14F260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F260u;
label_14f260:
    // 0x14f260: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14f260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14f264: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x14f264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x14f268: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x14f268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x14f26cu;
}
