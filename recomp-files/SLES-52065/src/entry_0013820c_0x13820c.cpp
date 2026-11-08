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

// Function: entry_0013820c
// Address: 0x13820c - 0x138274
void entry_0013820c_0x13820c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013820c_0x13820c");
#endif

    switch (ctx->pc) {
        case 0x13821cu: goto label_13821c;
        default: break;
    }

    ctx->pc = 0x13820cu;

    // 0x13820c: 0x0  nop
    ctx->pc = 0x13820cu;
    // NOP
    // 0x138210: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x138210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x138214: 0xc05f374  jal         func_17CDD0
    ctx->pc = 0x138214u;
    SET_GPR_U32(ctx, 31, 0x13821Cu);
    ctx->pc = 0x138218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138214u;
    // 0x138218: 0x8c440028  lw          $a0, 0x28($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CDD0u, 0x138214u, 0x13821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13821Cu;
label_13821c:
    // 0x13821c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x13821cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x138220: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x138220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x138224: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x138224u;
    {
        const bool branch_taken_0x138224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x138224) {
            ctx->pc = 0x138274u;
            return;
        }
    }
    ctx->pc = 0x13822Cu;
    // 0x13822c: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x13822cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x138230: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x138230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x138234: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x138234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x138238: 0x27a400dc  addiu       $a0, $sp, 0xDC
    ctx->pc = 0x138238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x13823c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x13823cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x138240: 0x24a56640  addiu       $a1, $a1, 0x6640
    ctx->pc = 0x138240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26176));
    // 0x138244: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x138244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x138248: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x138248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x13824c: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x13824cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138250: 0xc44000e8  lwc1        $f0, 0xE8($v0)
    ctx->pc = 0x138250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138254: 0xafb400cc  sw          $s4, 0xCC($sp)
    ctx->pc = 0x138254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 20));
    // 0x138258: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x138258u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13825c: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x13825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x138260: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x138260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x138264: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x138264u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x138268: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x138268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x13826c: 0xc04eb5c  jal         func_13AD70
    ctx->pc = 0x13826Cu;
    SET_GPR_U32(ctx, 31, 0x138274u);
    ctx->pc = 0x138270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13826Cu;
    // 0x138270: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AD70u, 0x13826Cu, 0x138274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138274u;
}
