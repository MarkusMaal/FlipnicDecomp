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

// Function: entry_00132e80
// Address: 0x132e80 - 0x132f80
void entry_00132e80_0x132e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132e80_0x132e80");
#endif

    switch (ctx->pc) {
        case 0x132f30u: goto label_132f30;
        case 0x132f38u: goto label_132f38;
        case 0x132f74u: goto label_132f74;
        default: break;
    }

    ctx->pc = 0x132e80u;

    // 0x132e80: 0x8e2600a0  lw          $a2, 0xA0($s1)
    ctx->pc = 0x132e80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x132e84: 0x106302b  sltu        $a2, $t0, $a2
    ctx->pc = 0x132e84u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x132e88: 0x14c0ffd3  bnez        $a2, . + 4 + (-0x2D << 2)
    ctx->pc = 0x132E88u;
    {
        const bool branch_taken_0x132e88 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x132E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E88u;
        // 0x132e8c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132e88) {
            ctx->pc = 0x132DD8u;
            return;
        }
    }
    ctx->pc = 0x132E90u;
    // 0x132e90: 0xc7a30120  lwc1        $f3, 0x120($sp)
    ctx->pc = 0x132e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x132e94: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x132e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x132e98: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x132e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132e9c: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x132e9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x132ea0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x132ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132ea4: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x132ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x132ea8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x132ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132eac: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x132eacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x132eb0: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x132eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
    // 0x132eb4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x132eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x132eb8: 0xafa600bc  sw          $a2, 0xBC($sp)
    ctx->pc = 0x132eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 6));
    // 0x132ebc: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x132ebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x132ec0: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x132ec0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x132ec4: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x132ec4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x132ec8: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x132ec8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x132ecc: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x132eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x132ed0: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x132ed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x132ed4: 0xafa600cc  sw          $a2, 0xCC($sp)
    ctx->pc = 0x132ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 6));
    // 0x132ed8: 0xe7a400c8  swc1        $f4, 0xC8($sp)
    ctx->pc = 0x132ed8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x132edc: 0xafa600dc  sw          $a2, 0xDC($sp)
    ctx->pc = 0x132edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 6));
    // 0x132ee0: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x132ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x132ee4: 0xe7a400d8  swc1        $f4, 0xD8($sp)
    ctx->pc = 0x132ee4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x132ee8: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x132ee8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x132eec: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x132eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132ef0: 0xe7a30100  swc1        $f3, 0x100($sp)
    ctx->pc = 0x132ef0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x132ef4: 0xafa600ec  sw          $a2, 0xEC($sp)
    ctx->pc = 0x132ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 6));
    // 0x132ef8: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x132ef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x132efc: 0xafa600fc  sw          $a2, 0xFC($sp)
    ctx->pc = 0x132efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 6));
    // 0x132f00: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x132f00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x132f04: 0xafa6010c  sw          $a2, 0x10C($sp)
    ctx->pc = 0x132f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 6));
    // 0x132f08: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x132f08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x132f0c: 0xafa6011c  sw          $a2, 0x11C($sp)
    ctx->pc = 0x132f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 6));
    // 0x132f10: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x132f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x132f14: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x132f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x132f18: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x132f18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x132f1c: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x132f1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x132f20: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x132f20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x132f24: 0xe7a40108  swc1        $f4, 0x108($sp)
    ctx->pc = 0x132f24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x132f28: 0xc061bf0  jal         func_186FC0
    ctx->pc = 0x132F28u;
    SET_GPR_U32(ctx, 31, 0x132F30u);
    ctx->pc = 0x132F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F28u;
    // 0x132f2c: 0xe7a40118  swc1        $f4, 0x118($sp) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186FC0u, 0x132F28u, 0x132F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F30u;
label_132f30:
    // 0x132f30: 0xc061b50  jal         func_186D40
    ctx->pc = 0x132F30u;
    SET_GPR_U32(ctx, 31, 0x132F38u);
    ctx->pc = 0x132F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F30u;
    // 0x132f34: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186D40u, 0x132F30u, 0x132F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F38u;
label_132f38:
    // 0x132f38: 0x1040011f  beqz        $v0, . + 4 + (0x11F << 2)
    ctx->pc = 0x132F38u;
    {
        const bool branch_taken_0x132f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132f38) {
            ctx->pc = 0x1333B8u;
            return;
        }
    }
    ctx->pc = 0x132F40u;
    // 0x132f40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x132f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x132f44: 0x1043011c  beq         $v0, $v1, . + 4 + (0x11C << 2)
    ctx->pc = 0x132F44u;
    {
        const bool branch_taken_0x132f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x132f44) {
            ctx->pc = 0x1333B8u;
            return;
        }
    }
    ctx->pc = 0x132F4Cu;
    // 0x132f4c: 0x8382852c  lb          $v0, -0x7AD4($gp)
    ctx->pc = 0x132f4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935852)));
    // 0x132f50: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x132F50u;
    {
        const bool branch_taken_0x132f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F50u;
        // 0x132f54: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132f50) {
            ctx->pc = 0x132F80u;
            return;
        }
    }
    ctx->pc = 0x132F58u;
    // 0x132f58: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x132f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x132f5c: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x132f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x132f60: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x132f60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x132f64: 0x24846300  addiu       $a0, $a0, 0x6300
    ctx->pc = 0x132f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25344));
    // 0x132f68: 0x24a533f0  addiu       $a1, $a1, 0x33F0
    ctx->pc = 0x132f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13296));
    // 0x132f6c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x132F6Cu;
    SET_GPR_U32(ctx, 31, 0x132F74u);
    ctx->pc = 0x132F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F6Cu;
    // 0x132f70: 0x24c662f0  addiu       $a2, $a2, 0x62F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x132F6Cu, 0x132F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F74u;
label_132f74:
    // 0x132f74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132f78: 0xa382852c  sb          $v0, -0x7AD4($gp)
    ctx->pc = 0x132f78u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935852), (uint8_t)GPR_U32(ctx, 2));
    // 0x132f7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x132f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x132f80u;
}
