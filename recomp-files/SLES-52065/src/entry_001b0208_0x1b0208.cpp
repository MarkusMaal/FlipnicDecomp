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

// Function: entry_001b0208
// Address: 0x1b0208 - 0x1b0298
void entry_001b0208_0x1b0208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0208_0x1b0208");
#endif

    switch (ctx->pc) {
        case 0x1b0224u: goto label_1b0224;
        default: break;
    }

    ctx->pc = 0x1b0208u;

    // 0x1b0208: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x1b0208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1b020c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1b020cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b0210: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1b0210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1b0214: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0218: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b0218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1b021c: 0xc04b7dc  jal         func_12DF70
    ctx->pc = 0x1B021Cu;
    SET_GPR_U32(ctx, 31, 0x1B0224u);
    ctx->pc = 0x1B0220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B021Cu;
    // 0x1b0220: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x1B021Cu, 0x1B0224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0224u;
label_1b0224:
    // 0x1b0224: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x1b0224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1b0228: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x1b0228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1b022c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1b022cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b0230: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1b0230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0234: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1b0234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0238: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1b0238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b023c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1b023cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b0240: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1b0240u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b0244: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1b0244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b0248: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1b0248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1b024c: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1b024cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b0250: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x1b0250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b0254: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1b0254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0258: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1b0258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b025c: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x1b025cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1b0260: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x1b0260u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1b0264: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1b0264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1b0268: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B0268u;
    {
        const bool branch_taken_0x1b0268 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0268u;
        // 0x1b026c: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0268) {
            ctx->pc = 0x1B02BCu;
            return;
        }
    }
    ctx->pc = 0x1B0270u;
    // 0x1b0270: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b0270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b0274: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b0278: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b027c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b027cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0280: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0280u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b0284: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0284u;
    {
        const bool branch_taken_0x1b0284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0284) {
            ctx->pc = 0x1B0298u;
            return;
        }
    }
    ctx->pc = 0x1B028Cu;
    // 0x1b028c: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b028cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1b0290: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0294: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b0298u;
}
